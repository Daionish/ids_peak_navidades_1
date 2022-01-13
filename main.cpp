#include "camera.h"


int main(int argc, char* argv[]) {
	std::cout << "EL PROYECTO WORKEA BROOOOOOOO!!" << std::endl;

	camera* cam = new camera(1);
	camera* cam2 = new camera(2);
	std::thread t1(&camera::run, cam);
	t1.join();
	std::thread t2(&camera::run, cam2);
	std::this_thread::sleep_for(std::chrono::seconds(3));
	t2.join();


}
