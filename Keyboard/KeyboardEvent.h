#pragma once

class KeyboardEvent
{
public:
	enum EventType
	{
		Press,		// 押したとき
		Release,	// 離したとき
		Invalid,	// 無効
	};

	KeyboardEvent();
	KeyboardEvent(const EventType type, const unsigned char key);
	bool IsPress() const;
	bool IsRelease() const;
	bool IsValid() const;
	unsigned char GetKeyCode() const;

private:
	EventType type;
	unsigned char key;
};