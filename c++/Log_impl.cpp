#include <iostream>
class Log{
    public:
        enum Level{
            ERROR = 0,
            WARNING = 1,
            INFO = 2
        };
    private:
        Level m_log_level = Level::INFO;
    public:
        void setLogLevel(Level level){
            m_log_level = level;
        }
        void log(const char* message){
            std::cout<<message<<std::endl;
        }
        void error(const char* message){
            if(m_log_level >= Level::ERROR)
                std::cout<<"[ERROR]: "<<message<<std::endl;
        }
        void warning(const char* message){
            if(m_log_level >= Level::WARNING)
                std::cout<<"[WARNING]: "<<message<<std::endl;
        }
};
int main()
{
    Log log;
    log.setLogLevel(Log::Level::ERROR);
    log.log("this is info");
    log.warning("this is warning");
    log.error("this is error");
}
