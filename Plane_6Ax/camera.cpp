/*****************************************************************************
* @file     camera.cpp
* @brief    �Ӿ�ģ��
* ��ȡͿ��������ͼƬ����ϵ�£�
******************************************************************************/

#include<stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include"image_process_function.h"

using namespace std;
using namespace cv;

/**
 * @name	InitCamera
 * @brief	��ʼ�����
 * @param	��
 * @return	1	��ʼ���ɹ�
 *			0	��ʼ��ʧ��
 * @note
 */
int InitCamera() {
	return 1;
}

/**
 * @name	GetGlueContour
 * @brief	��ȡͼƬ����ϵ�µ�Ϳ������
 * @param	��
 * @return	Ϳ��������vector<Point>��ʽ
 * @note
 */
vector<Point> GetGlueContour(){
	vector<Point> glue_contour;
	return glue_contour;
}

/**
 * @name	GetBeltVelocity
 * @brief	��ȡ���ʹ��ٶ�
 * @param	��
 * @return	double���͵Ĵ��ʹ��ٶ�
 * @note	�����Ƿ����Ӿ�������ȡ�ٶ�
 */
double GetBeltVelocity() {
	double v_belt=0.1;
	return v_belt;
}
