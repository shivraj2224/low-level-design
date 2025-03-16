
#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Observer {
    public:
        virtual void update() = 0;
        virtual ~Observer() = default;
};

#endif 