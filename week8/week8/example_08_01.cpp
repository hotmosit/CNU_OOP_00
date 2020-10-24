#include <iostream>

class GlobalLogger{
	int log_value;
	
	static GlobalLogger* instance;


	GlobalLogger(int v = 0) {
		log_value = v;
	}

public:

	static GlobalLogger* getInstance();

	int get_log_data(){
		return log_value;
	}
	void set_log_data(int v){
		log_value = v;
	}
};

GlobalLogger* GlobalLogger::instance = NULL;

GlobalLogger* GlobalLogger::getInstance() {
	if (!instance)
		instance = new GlobalLogger();

	return instance;
}



// Default initialization
GlobalLogger* global_Logger_ptr = 0;

void Logger_User_A(void){
	// Initialization on first use
	if (!global_Logger_ptr)
		global_Logger_ptr = GlobalLogger::getInstance();
	global_Logger_ptr->set_log_data(1);
	std::cout << "Logger_User_A: log_data is " << global_Logger_ptr->get_log_data() << '\n';
}

void Logger_User_B(void){
	if (!global_Logger_ptr)
		global_Logger_ptr = GlobalLogger::getInstance();
	global_Logger_ptr->set_log_data(2);
	std::cout << "Logger_User_B: log_data is " << global_Logger_ptr->get_log_data() << '\n';
}

int main(){
	if (!global_Logger_ptr)
		global_Logger_ptr = GlobalLogger::getInstance();
	std::cout << "main: log_data is " << global_Logger_ptr->get_log_data() << '\n';
	Logger_User_A();
	Logger_User_B();
}
