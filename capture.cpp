#include "capture.h"
#include "camera.h"


capture::capture(int deviceID) {
	m_deviceID = deviceID;
}
capture::~capture() {

}

void capture::read_configuration_file() {
	std::cout << "opening configuration file " << std::endl;
}

void capture::init_cameras() {
	std::cout << "all cameras have been initialized" << std::endl;
}

void capture::launch_cameras_threads() {

	std::cout << "here is where we will do the run funcion with all of the camera functions" << std::endl;
}

void capture::notify_all_cameras_ready() {
	cv.notify_all();
	std::cout << "all cameras are ready" << std::endl;

}

void capture::start_software_trigger_loop() {

	std::cout << "trigger loop started" << std::endl;
}

void capture::stop_cameras_acquisition() {
	std::cout << "stopped cameras acquisition" << std::endl;
}


