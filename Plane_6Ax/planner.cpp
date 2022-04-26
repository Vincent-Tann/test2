/**************************************************************
* @file     planner.cpp
* @brief    �켣�滮ģ��
* ʹ���Ӿ�ģ�������Ϳ��������ͼƬ����ϵ����
* �����������ϵ��ʵ��Ҫ����Ķ�̬Ϳ��������
**************************************************************/

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include <Windows.h>
#include<vector>
#include <math.h>
#include <map>
#include <opencv2/core/core.hpp>	
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

/**
 * @name	SampleOnContour
 * @brief	��Ϳ�������ϲ���
 * @param	contour	�������Ϳ������
 * @return	�������飬vector<Point>��ʽ
 * @note	
 */
vector<Point> SampleOnContour(vector<Point> contour) {
	vector<Point> points;
	return points;
}

/**
 * @name	Transform
 * @brief	ת������������ϵ�£��õ���̬Ϳ�������㣨���ʹ���ֹ��
 * @param	points_in_pic	ͼƬ����ϵ�µĲ�����
 * @return	��������ϵ�µľ�̬Ϳ��������
 * @note
 */
vector<Point> Transform(vector<Point> points_in_pic) {
	vector<Point> points_in_world;
	return points_in_world;
}

/**
 * @name	Dynamicalize
 * @brief	��ö�̬Ϳ��������
	��ϴ��ʹ��ٶȺ͸����ʱ���滮�����ʹ����е�����£���е��ĩ��Ҫ����ĸ������ꣻ
	������̬Ϳ���������y�����ʹ����з����������μ�v*dt,2*v*dt,3*v*dt...��
	����v�Ǵ��ʹ��ٶȣ�dt������������ʱ��
 * @param	points_s	��̬Ϳ��������
 * @param	v	���ʹ��ٶ�
 * @param	dt	���������ʱ���
 * @return	��������ϵ�µĶ�̬Ϳ��������
 * @note
 */
vector<Point> Dynamicalize(vector<Point> points_s, double v, double dt) {
	vector<Point> points_d;
	return points_d;
}

