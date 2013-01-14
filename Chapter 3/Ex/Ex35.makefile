# Напишите для одного из предыдущих упражнений (по вашему выбору) make-файл.
# По команде make должна строиться рабочая версия программы, а по команде
# make debug - версия c включением отладочного кода
CPP = g++
SOURCE_FILE = Ex34.cpp
common:
	$(CPP) $(SOURCE_FILE)
debug:
	$(CPP) -D NDEBUG $(SOURCE_FILE)