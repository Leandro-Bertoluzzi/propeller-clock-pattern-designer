#include "cApp.h"

// We declare cApp as the entry point for the application
wxIMPLEMENT_APP(cApp);

cApp::cApp() {

}

cApp::~cApp() {

}

bool cApp::OnInit() {
	myFrame = new cMain();
	myFrame->Show();

	return true;
}