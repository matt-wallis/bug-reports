
# At the time of finding the bug, we have:
#     $ Magick++-config --ldflags
#     -L/opt/local/lib -lMagick++-6.Q16 -lMagickWand-6.Q16 -lMagickCore-6.Q16

a.out: magick-pdf-seg-fault.cpp
	g++ `Magick++-config --cppflags --cxxflags` magick-pdf-seg-fault.cpp\
		`Magick++-config --ldflags --libs`
