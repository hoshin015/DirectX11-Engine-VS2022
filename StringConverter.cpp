#include "StringConverter.h"

/// <summary>
/// stringをwideStringに変換する
/// </summary>
/// <param name="str">返還前のstring型</param>
/// <returns>変換後のwstring型</returns>
std::wstring StringConverter::StringToWide(std::string str)
{
	std::wstring wide_string(str.begin(), str.end());
	return wide_string;
}

