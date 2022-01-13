#pragma once

#include <fstream>
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <thread>

class camera {
public:
	camera(int deviceID);
	virtual ~camera();

	void open_devices();
	void configure_device();
	void start_acquisition();
	void stop_acquisition();
	void capture_loop();
	void close_device();
	void save_frame_to_file();

	void run();

private:
	int m_deviceID;
	int frames;
	int counter;
};
