#include "Vision.h"
#include <iostream>

CJ::Camera::Cam cam;
CJ::Image inputImage;
CJ::Image filteredImage;
CJ::Image contourImage;

CJ::ColourFilter::Options opts;

void Vision::Init() {
  // Logic here will run once (Initialization)
	CJ::Core::init();

	cam.config = {
		0,
		cv::CAP_ANY,
		60,
		640,
		480,
		0.1,
		true,
		"Cam"
	};

	inputImage.name = "Input From Camera";
	filteredImage.name = "Filtered Image";

	CJ::Core::setupVision(&inputImage, &cam);

	opts = { // Lemon colour
		20, // H
		35,
		60, // S
		250,
		170, // V
		250,
		0,
		0,
		false
	};

	CJ::ColourFilter::filter(&inputImage, &filteredImage, opts); // Filters colours
	CJ::Contours::detectContours(&filteredImage, &contourImage, 50); // detect contours from filtered image
}

void Vision::Periodic() {
  // Logic here will run periodicly (Looping)
	CJ::Output::Display(&inputImage);
	CJ::Output::Display(&filteredImage);
	CJ::Output::Display(&contourImage);
}