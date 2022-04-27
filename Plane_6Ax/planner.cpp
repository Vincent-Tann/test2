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
	�ȼ��ȡ10����
 * @param	contour	�������Ϳ������
 * @return	�������飬vector<Point>��ʽ
 * @note	
 */
vector<Point> SampleOnContour(vector<Point> contour) {
	vector<Point> sample_points;	//����������
	Point cur_point;	//��ǰ��		
	int point_num = contour.size();	//�������ܵ���
	int step = point_num / 10;		//��������
	for (int i = 0; i < point_num; i += step) {
		cur_point = contour[i];
		sample_points.push_back(cur_point);
	}
	return sample_points;
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
	������̬Ϳ���������y�����ʹ����з����������μ�v*t0,v*(dt+t0),v*(2dt+t0)...��
	����v�Ǵ��ʹ��ٶȣ�dt������������ʱ��t0Ϊ��ʼͿ��ʱ�̺�����ʱ�̵�ʱ���
 * @param	points_s	��̬Ϳ��������
 * @param	v	���ʹ��ٶ�
 * @param	dt	���������ʱ���
 * @return	��������ϵ�µĶ�̬Ϳ��������
 * @note
 */
vector<Point> Dynamicalize(vector<Point> points_s, double v, double dt) {
	vector<Point> points_d;	//�����صĶ�̬Ϳ������������
	Point cur_point;	//��ǰ��		
	int points_num = points_s.size();	//��ĸ���
	double t0 = 1.0;
	for (int i = 0; i < points_num; i++) {
		cur_point.x = points_s[i].x;
		cur_point.y = points_s[i].y+t0+i*dt;
	}
	return points_d;
}

