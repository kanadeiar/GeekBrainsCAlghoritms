#pragma once

/**
 * \brief ��������� ���-���� ��������� ��������
 * \param str �������� ������
 * \return ���-���
 */
int getHashFromStr(char str[])
{
	char * p_str = str;
	int count = 0;
	while (*p_str != '\0')
	{
		char c = *p_str;
		count += c;
		p_str++;
	}
	return count % 1988; //��� �������� - ����
}