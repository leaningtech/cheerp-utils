//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef CHEERP_PIMPL
#define CHEERP_PIMPL

#include <memory>

class [[cheerp::genericjs]][[cheerp::jsexport]] CounterAlive {
public:
        CounterAlive()
        {
                ++counter;
        }
//      ~CounterAlive()
        void deleter()  //current limitation on the destructor
        {
                --counter;
        }
        [[cheerp::jsexport]]
        static int numberAlive()
        {
                return counter;
        }
        [[cheerp::jsexport]]
        void placeholder()
        {
        }
private:
        static int counter;
};

namespace cheerp_pimpl
{

template<typename T>
class [[cheerp::genericjs]] pimpl_with_deleter {
private:
        T* m;
        CounterAlive counter;
public:
        pimpl_with_deleter() : m(new T()) {}
        template<typename ...Args> pimpl_with_deleter( Args&& ... args) : m( new T(args...)) {}
        /*      current limitations on member of [[cheerp::jsexport]]-ed classes impose deleting the destructor
        ~pimpl_with_deleter()
        {
                deleter();
        }*/
        void deleter()
        {
                counter.deleter();
                //Since for now we have to do without destructor
                //we declare a class deleter that is manually called and implement the destructor
                delete m;
        }
        T* operator->()
        {
                return m;
        }
        T& operator*()
        {
                return *m;
        }
        const T* operator->() const
        {
                return m;
        }
        const T& operator*() const
        {
                return *m;
        }
};
}       //end namespace cheerp_pimpl

#endif
