#pragma once
#include <fstream>
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>


class capture {
public:
	capture(int deviceID);
	virtual ~capture();

	void read_configuration_file();
	void init_cameras();
	void launch_cameras_threads();
	void notify_all_cameras_ready();
	void start_software_trigger_loop();
	void stop_cameras_acquisition();

private:
	int m_deviceID;
	int counter;
	std::mutex mtx;
	std::condition_variable cv;
};