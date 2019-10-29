#include <Magick++.h>
#include <iostream>

using namespace Magick;
using namespace std;

void read_file(const string& name) {
	cout << "Reading " << name << endl;
	Image image;
	try {
		image.read(name);
		cout << "Image read ok, File: " << name << endl;
	} catch (const Exception& ex) {
		cerr << ex.what() << ", File:" << name << '\n';
	} catch (...) {
		cerr << "Caught unspecified exception" << ", File: " << name << endl;
	}
}
int main(int argc, char**argv) {
	// Try reading a file that isn't an image. Throws exception as expected:
	read_file("magick-pdf-seg-fault.cpp");

	// Try reading a PDF - Seg fault :-(
	read_file("out.pdf");
}
