/*****************************************************************************
* @file     main.cpp															
* @brief    ʹ������Դ��ʹ��ϵĹ������գ������ƻ�е���������Ϳ��			
* �������̿ɷ�Ϊ���¼������֣�													
*		1����ʼ�������															
*		2����ȡͼƬ����ϵ�µ�Ϳ������������ȡ���ʹ��ٶȣ�
*		3�������õ����ɲ����㣻
*		4������任��ת������������ϵ�£��õ���̬Ϳ�������㣨���ʹ���ֹ����
*		5����ϴ��ʹ��ٶȺ͸����ʱ���滮�����ʹ����е�����£�
*		   ��е��ĩ��Ҫ����ĸ������ꣻ
*		6�����ƻ�е��Ϳ����									
******************************************************************************/


#include<iostream>
#include<stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include"all_header.h"


using namespace std;
using namespace cv;

int main() {
	vector<Point> contour_in_pic;	//�Ӿ�ģ���õ�Ϳ������(ͼƬ����ϵ��
	vector<Point> points_in_pic;	//�����ϵĲ����㣨ͼƬ����ϵ��
	vector<Point> points_in_world_s;	//��̬Ϳ�������㣨��������ϵ��
	vector<Point> points_in_world_d;	//��̬Ϳ�������㣨��������ϵ��
	double v_belt;		//���ʹ��ٶ�
	double dt=0.5;			//����Ϳ������ʱ����
	
	//��ʼ�����
	printf("Initializing camera...");
	if (!InitCamera()) {
		printf("failed!\n");
		return 0;
	}
	printf("succeed!\n");
	
	//��ȡͼƬ����ϵ�µ�Ϳ���������ʹ��ʹ��ٶ�
	contour_in_pic = GetGlueContour();
	v_belt = GetBeltVelocity();

	//�������ϲ���
	points_in_pic = SampleOnContour(contour_in_pic);

	//ת������������ϵ����ȡ��̬Ϳ��������
	points_in_world_s = Transform(points_in_pic);

	//��ȡ���ʹ��˶���Ķ�̬Ϳ��������
	points_in_world_d = Dynamicalize(points_in_world_d,v_belt,dt);

	//���ݶ�̬Ϳ�������㣬���ƻ�е���˶�
	Glue(points_in_world_d);

	printf("Finish glueing!\n");

	return 0;
}