#pragma once
#include <stdio.h>
#include <stdlib.h>
#define T int

/**
 * \brief ���� ������
 */
typedef struct Node
{
	T value;
	struct Node * left;
	struct Node * right;
	struct Node * parent;
} Node;
/**
 * \brief ������ ������ � �������
 * \param root ������
 */
void PrintTree(Node * root)
{
	if (root)
	{
		printf("%d", root->value);
		if (root->left || root->right)
		{
			printf("(");
			if (root->left)
				PrintTree(root->left);
			else
				printf("NULL");
			printf(",");
			if (root->right)
				PrintTree(root->right);
			else
				printf("NULL");
			printf(")");
		}
	}
}
/**
 * \brief �������� ������ ������� ����
 * \param value ��������
 * \param parent ��������
 * \return ����� ����
 */
Node * GetNewNode(T value, Node * parent)
{
	Node *tmp = (Node *) malloc(sizeof(Node));
	tmp->left = tmp->right = NULL;
	tmp->value = value;
	tmp->parent = parent;
	return tmp;
}
/**
 * \brief ������� ������ �������� � ������
 * \param head ������ ������
 * \param value ��������
 */
void InsertNode(Node **head, T value)
{
	Node *tmp = NULL;
	if (*head == NULL)
	{
		*head = GetNewNode(value, NULL);
		return;
	}
	tmp = *head;
	while (tmp)
	{
		if (value > tmp->value)
		{
			if (tmp->right)
			{
				tmp = tmp->right;
				continue;
			}
			else
			{
				tmp->right = GetNewNode(value, tmp);
				return;
			}
		}
		else if (value < tmp->value)
		{
			if (tmp->left)
			{
				tmp = tmp->left;
				continue;
			}
			else
			{
				tmp->left = GetNewNode(value, tmp);
				return;
			}
		}
		else
		{
			exit(2);
		}
	}
}
/**
 * \brief ������ ����� ������ ��� "������-�����-������"
 * \param root ������ ������
 */
void PreOrderTravers(Node *root)
{
	if (root)
	{
		printf("%d ", root->value);
		PreOrderTravers(root->left);
		PreOrderTravers(root->right);
	}
}
/**
 * \brief ������������ ����� ��� - "�����-������-������"
 * \param root ������ ������
 */
void SimmOrderTravers(Node *root)
{
	if (root)
	{
		SimmOrderTravers(root->left);
		printf("%d ", root->value);
		SimmOrderTravers(root->right);
	}
}
/**
 * \brief �������� ����� ��� - "�����-������-������"
 * \param root ������ ������
 */
void AfterOrderTravers(Node *root)
{
	if (root)
	{
		AfterOrderTravers(root->left);
		AfterOrderTravers(root->right);
		printf("%d ", root->value);
	}
}
/**
 * \brief ����� ��������
 * \param root ������ ������
 * \param value ��������
 * \return ������� ���������
 */
Node *FindInTree(Node *root, T value)
{
	if (root)
	{
		if (root->value == value)
			return root;
		Node *tmpleft = FindInTree(root->left, value);
		if (tmpleft != NULL)
			return tmpleft;
		Node *tmpright = FindInTree(root->right, value);
		if (tmpright != NULL)
			return tmpright;
	}
	return NULL;
}

