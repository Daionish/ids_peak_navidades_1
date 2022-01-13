#include "camera.h"


camera::camera(int deviceID) {
	m_deviceID = deviceID;
}
camera::~camera() {

}

void camera::open_devices() {
	std::cout << "opening device: " << this->m_deviceID << std::endl;
}

void camera::configure_device() {
	//buffer de frames ya capturados
	std::cout << "buffers have been alloc, announced and queued" << std::endl;
}

//y ademas tenemos que tenemos que tener una funcion que haga pop y push

void camera::start_acquisition() {
	std::cout << "successfully started the datastream's acquisition engine" << std::endl;
}

void camera::stop_acquisition() {
	std::cout << "successfully stopped the datastream's acquisition engine"<< std::endl;
}

void camera::capture_loop() {
	std::cout << "capturing images"<< std::endl;
	counter = 0;
	frames = 100;
	for (int i = 0; i < frames; i++) {
		auto start = std::chrono::system_clock::now();
		std::cout << "aqui pasarian cositas" << std::endl << std::endl;
		auto end = std::chrono::system_clock::now();
		double tiempo = std::chrono::duration<double, std::milli>(end - start).count();
		//guardar en fichero el time stamp
		std::cout << "frame: " << counter << " ha sido capturado en: " << tiempo << " segundos" << std::endl;
		counter++;
	}

}

void camera::close_device() {
	std::cout << "device has been closed" << std::endl;
}

void camera::save_frame_to_file() {
	std::cout << "frames saving to file" << std::endl;
}

 void camera::run() {
	open_devices();
	configure_device();
	start_acquisition();
	capture_loop();
	save_frame_to_file();
	stop_acquisition();
	close_device();
}


