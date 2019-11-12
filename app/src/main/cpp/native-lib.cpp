#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>



using namespace cv;

extern "C"
JNIEXPORT void JNICALL
Java_com_example_cpptest_MainActivity_ConvertRGBtoGray(JNIEnv *env, jobject thiz,
                                                       jlong mat_addr_input,
                                                       jlong mat_addr_result) {

    Mat matInput = *(Mat *) mat_addr_input;
    Mat matOutput = *(Mat *) mat_addr_result;

    matOutput = matInput + 250;
    //cvtColor(matInput, matOutput, COLOR_RGBA2GRAY);
}