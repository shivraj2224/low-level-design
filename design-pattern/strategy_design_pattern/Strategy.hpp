
#ifndef STRATEGY_HPP
#define STRATEGY_HPP

class Strategy{
        public:
                virtual void execute() = 0;
                virtual ~Strategy(){}
};

#endif