#pragma once
#include <stdio.h>
#include <stdlib.h>

//���� ������
struct My_Node
{
	int value;
	struct My_Node * next;
};
/**
 * \brief �������� ������
 * \param value �������� ������� ��������
 * \return ��������� �� ������ ������
 */
struct My_Node * InitMyNodes(int value)
{
	struct My_Node * temps;
	temps = (struct My_Node *)malloc(sizeof(struct My_Node));
	temps->value = value;
	temps->next = NULL;
	return temps;
}
/**
 * \brief ���������� �������� � ����� ������
 * \param head ������ ������
 * \param value ��������
 */
void AddToEndMyNodes(struct My_Node * head, int value)
{
	struct My_Node * temp;
	temp = (struct My_Node *)malloc(sizeof(struct My_Node));
	temp->value = value;
	temp->next = NULL;
	struct My_Node * search = head;
	while (search->next != NULL)
	{
		search = search->next;
	}
	search->next = temp;
}
/**
 * \brief ����� �� ����� ���� ��������� ������
 * \param head ������ ������
 */
void PrintNodes(struct My_Node * head)
{
	struct My_Node * p = head;
	while (p != NULL)
	{
		printf("%d ", p->value);
		p = p->next;
	}
}

struct My_Node * CloneMyNodes(struct My_Node * head)
{
	struct My_Node * temps;
	temps = (struct My_Node *)malloc(sizeof(struct My_Node));
	temps->value = head->value;
	temps->next = NULL;
	struct My_Node * search = head;
	struct My_Node * newtemp = temps;
	while (search->next != NULL)
	{
		search = search->next;
		struct My_Node * temp;
		temp = (struct My_Node *)malloc(sizeof(struct My_Node));
		temp->value = search->value;
		temp->next = NULL;
		newtemp->next = temp;
		newtemp = newtemp->next;
	}
	return temps;
}
