#include <iostream>
#include <string>
using namespace std;

class ILoggable {
public:

    virtual void logInfo(const std::string& message) = 0;
    virtual void logError(const std::string& message) = 0;
    virtual ~ILoggable() {}
};


class ConsoleLogger : public ILoggable {
public:

    void logInfo(const std::string& message) override {
        cout << "INFO: " << message << endl;
    }


    void logError(const std::string& message) override {
        cout << "ERROR: " << message << endl;
    }
};

int main() {

    ConsoleLogger logger;

    logger.logInfo("This is an informational message.");
    logger.logError("This is an error message.");

    return 0;
}
