#include <hidboot.h>

#define DELAY 20
#define CLK    4
#define DAT    3
#define RST    2

#define JF     5 // Joystick Fire
#define JR     6 // Joystick Right
#define JL     7 // Joystick Left
#define JD     8 // Joystick Down
#define JU     9 // Joystick Up

#define M2     14 // Mouse Button 2
#define M1     15 // Mouse Button 1
#define MHQ    16 // HQ
#define MVQ    17 // VQ
#define MH     18 // H
#define MV     19 // V

/********/

#define AMIGA_ESC	 0x45
#define AMIGA_F1	 0x50
#define AMIGA_F2	 0x51
#define AMIGA_F3	 0x52
#define AMIGA_F4	 0x53
#define AMIGA_F5	 0x54
#define AMIGA_F6	 0x55
#define AMIGA_F7	 0x56
#define AMIGA_F8	 0x57
#define AMIGA_F9	 0x58
#define AMIGA_F10	 0x59
#define AMIGA_DEL	 0x46
#define AMIGA_TILDE	 0x00 // ~
#define AMIGA_1		 0x01
#define AMIGA_2		 0x02
#define AMIGA_3		 0x03
#define AMIGA_4		 0x04
#define AMIGA_5		 0x05
#define AMIGA_6		 0x06
#define AMIGA_7		 0x07
#define AMIGA_8		 0x08
#define AMIGA_9		 0x09
#define AMIGA_0		 0x0A
#define AMIGA_MINUS	 0x0B
#define AMIGA_EQUAL	 0x0C
#define AMIGA_BACKSLASH  0x0D // \
#define AMIGA_BACKSPACE  0x41
#define AMIGA_TAB        0x42
#define AMIGA_Q          0x10
#define AMIGA_W          0x11
#define AMIGA_E          0x12
#define AMIGA_R          0x13
#define AMIGA_T          0x14
#define AMIGA_Y          0x15
#define AMIGA_U          0x16
#define AMIGA_I          0x17
#define AMIGA_O          0x18
#define AMIGA_P          0x19
#define AMIGA_LBRACKET   0x1A // [
#define AMIGA_RBRACKET   0x1B // ]
#define AMIGA_ENTER      0x44
#define AMIGA_HELP       0x5F
#define AMIGA_CTRL       0x63
#define AMIGA_CAPSLOCK   0x62
#define AMIGA_A          0x20
#define AMIGA_S          0x21
#define AMIGA_D          0x22
#define AMIGA_F          0x23
#define AMIGA_G          0x24
#define AMIGA_H          0x25
#define AMIGA_J          0x26
#define AMIGA_K          0x27
#define AMIGA_L          0x28
#define AMIGA_SEMICOLON  0x29 // ;
#define AMIGA_QUOTE      0x2A // ;'
#define AMIGA_LSHIFT     0x60
#define AMIGA_Z          0x31
#define AMIGA_X          0x32
#define AMIGA_C          0x33
#define AMIGA_V          0x34
#define AMIGA_B          0x35
#define AMIGA_N          0x36
#define AMIGA_M          0x37
#define AMIGA_COMMA      0x38
#define AMIGA_PERIOD     0x39
#define AMIGA_SLASH      0x3A // /
#define AMIGA_RSHIFT     0x61
#define AMIGA_ALT        0x64 // LEFT AND RIGHT ARE THE SAME
#define AMIGA_LAMIGA     0x66
#define AMIGA_SPACE      0x40
#define AMIGA_RAMIGA     0x67
#define AMIGA_UP         0x4C
#define AMIGA_DOWN       0x4D
#define AMIGA_RIGHT      0x4E
#define AMIGA_LEFT       0x4F
#define AMIGA_NP_0       0x0F
#define AMIGA_NP_1       0x1D
#define AMIGA_NP_2       0x1E
#define AMIGA_NP_3       0x1F
#define AMIGA_NP_4       0x2D
#define AMIGA_NP_5       0x2E
#define AMIGA_NP_6       0x2F
#define AMIGA_NP_7       0x3D
#define AMIGA_NP_8       0x3E
#define AMIGA_NP_9       0x3F
#define AMIGA_NP_ENTER   0x43

/********/

#define USB_ESC          41
#define USB_TAB          43
#define USB_ENTER        40
#define USB_LEFT         80
#define USB_RIGHT        79
#define USB_UP           82
#define USB_DOWN         81
#define USB_SPACE        44
#define USB_BACKSPACE    42
#define USB_F1           58
#define USB_F2           59
#define USB_F3           60
#define USB_F4           61
#define USB_F5           62
#define USB_F6           63
#define USB_F7           64
#define USB_F8           65
#define USB_F9           66
#define USB_F10          67
#define USB_F11          68
#define USB_F12          69
#define USB_1            30
#define USB_2            31
#define USB_3            32
#define USB_4            33
#define USB_5            34
#define USB_6            35
#define USB_7            36
#define USB_8            37
#define USB_9            38
#define USB_0            39
#define USB_MINUS        45
#define USB_EQUAL        46
#define USB_Q            20
#define USB_W            26
#define USB_E             8
#define USB_R            21
#define USB_T            23
#define USB_Y            28
#define USB_U            24
#define USB_I            12
#define USB_O            18
#define USB_P            19
#define USB_LBRACKET     47 // [
#define USB_RBRACKET     48 // ]
#define USB_A             4
#define USB_S            22
#define USB_D             7
#define USB_F             9
#define USB_G            10
#define USB_H            11
#define USB_J            13
#define USB_K            14
#define USB_L            15
#define USB_SEMICOLON    51 // ;
#define USB_QUOTE        52 // '
#define USB_BACKSLASH    50 // \
#define USB_Z            29
#define USB_X            27
#define USB_C             6
#define USB_V            25
#define USB_B             5
#define USB_N            17
#define USB_M            16
#define USB_COMMA        54
#define USB_PERIOD       55
#define USB_SLASH        56 // /

#define USB_TILDE        53 // ~

#define USB_PRINTSCR     70
#define USB_SCROLLLOCK   71
#define USB_PAUSE        72

#define USB_INSERT       73
#define USB_HOME         74
#define USB_PAGEUP       75
#define USB_DEL          76
#define USB_END          77
#define USB_PAGEDOWN     78

#define USB_LWIN          8 // modifier key
#define USB_RWIN        101
#define USB_ALTGR        64 // modifier key
#define USB_RCTRL        16 // modifier key
#define USB_RSHIFT       32 // modifier key

#define USB_NP_LEFT      92
#define USB_NP_RIGHT     94
#define USB_NP_UP        96
#define USB_NP_DOWN      90

#define USB_LCTRL         1 // modifier key
#define USB_LSHIFT        2 // modifier key
#define USB_LALT          4 // modifier key

/********/

#define IBMPC_ESC        0x01
#define IBMPC_1          0x02
#define IBMPC_2          0x03
#define IBMPC_3          0x04
#define IBMPC_4          0x05
#define IBMPC_5          0x06
#define IBMPC_6          0x07
#define IBMPC_7          0x08
#define IBMPC_8          0x09
#define IBMPC_9          0x0A
#define IBMPC_0          0x0B
#define IBMPC_MINUS      0x0C
#define IBMPC_EQUAL      0x0D
#define IBMPC_BACKSPACE  0x0E
#define IBMPC_Q          0x10
#define IBMPC_W          0x11
#define IBMPC_E          0x12
#define IBMPC_R          0x13
#define IBMPC_T          0x14
#define IBMPC_Y          0x15
#define IBMPC_U          0x16
#define IBMPC_I          0x17
#define IBMPC_O          0x18
#define IBMPC_P          0x19
#define IBMPC_LBRACKET   0x1A
#define IBMPC_RBRACKET   0x1B
#define IBMPC_ENTER      0x1C
#define IBMPC_CTRL       0x1D
#define IBMPC_A          0x1E
#define IBMPC_S          0x1F
#define IBMPC_D          0x20
#define IBMPC_F          0x21
#define IBMPC_G          0x22
#define IBMPC_H          0x23
#define IBMPC_J          0x24
#define IBMPC_K          0x25
#define IBMPC_L          0x26
#define IBMPC_SEMICOLON  0x27
#define IBMPC_QUOTE      0x28
#define IBMPC_TILDE      0x29
#define IBMPC_LSHIFT     0x2A
#define IBMPC_BACKSLASH  0x2B
#define IBMPC_Z          0x2C
#define IBMPC_X          0x2D
#define IBMPC_C          0x2E
#define IBMPC_V          0x2F
#define IBMPC_B          0x30
#define IBMPC_N          0x31
#define IBMPC_M          0x32
#define IBMPC_COMMA      0x33
#define IBMPC_PERIOD     0x34
#define IBMPC_SLASH      0x35
#define IBMPC_RSHIFT     0x36
#define IBMPC_PRINTSCR   0x37
#define IBMPC_ALT        0x38
#define IBMPC_SPACE      0x39
#define IBMPC_CAPSLOCK   0x3A
#define IBMPC_F1         0x3B
#define IBMPC_F2         0x3C
#define IBMPC_F3         0x3D
#define IBMPC_F4         0x3E
#define IBMPC_F5         0x3F
#define IBMPC_F6         0x40
#define IBMPC_F7         0x41
#define IBMPC_F8         0x42
#define IBMPC_F9         0x43
#define IBMPC_F10        0x44
#define IBMPC_NUMLOCK    0x45
#define IBMPC_SCROLLLOCK 0x46

/********/

uint8_t convert(uint8_t key) {
	uint8_t code = 0;

	switch(key) {
		case        USB_ESC: code = AMIGA_ESC; break;
		case          USB_1: code = AMIGA_1; break;
		case          USB_2: code = AMIGA_2; break;
		case          USB_3: code = AMIGA_3; break;
		case          USB_4: code = AMIGA_4; break;
		case          USB_5: code = AMIGA_5; break;
		case          USB_6: code = AMIGA_6; break;
		case          USB_7: code = AMIGA_7; break;
		case          USB_8: code = AMIGA_8; break;
		case          USB_9: code = AMIGA_9; break;
		case          USB_0: code = AMIGA_0; break;
		case      USB_MINUS: code = AMIGA_MINUS; break;
		case  USB_BACKSPACE: code = 0x41; break;
		case      USB_ENTER: code = AMIGA_ENTER; break;
		case          USB_A: code = AMIGA_A; break;
		case          USB_S: code = AMIGA_S; break;
		case          USB_D: code = AMIGA_D; break;
		case          USB_F: code = AMIGA_F; break;
		case          USB_G: code = AMIGA_G; break;
		case          USB_H: code = AMIGA_H; break;
		case          USB_J: code = AMIGA_J; break;
		case          USB_K: code = AMIGA_K; break;
		case          USB_L: code = AMIGA_L; break;
		case  USB_SEMICOLON: code = AMIGA_SEMICOLON; break;
		case             29: code = AMIGA_Z; break;
		case          USB_X: code = AMIGA_X; break;
		case          USB_C: code = AMIGA_C; break;
		case          USB_V: code = AMIGA_V; break;
		case          USB_B: code = AMIGA_B; break;
		case          USB_N: code = AMIGA_N; break;
		case          USB_M: code = AMIGA_M; break;
		case      USB_COMMA: code = AMIGA_COMMA; break;
		case     USB_PERIOD: code = AMIGA_PERIOD; break;
		case      USB_SPACE: code = AMIGA_SPACE; break;
		case         USB_F1: code = AMIGA_F1; break;
		case         USB_F2: code = AMIGA_F2; break;
		case         USB_F3: code = AMIGA_F3; break;
		case         USB_F4: code = AMIGA_F4; break;
		case         USB_F5: code = AMIGA_F5; break;
		case         USB_F6: code = AMIGA_F6; break;
		case         USB_F7: code = AMIGA_F7; break;
		case         USB_F8: code = AMIGA_F8; break;
		case         USB_F9: code = AMIGA_F9; break;
		case        USB_F10: code = AMIGA_F10; break;
		case          USB_Q: code = AMIGA_Q; break;
		case          USB_W: code = AMIGA_W; break;
		case          USB_E: code = AMIGA_E; break;
		case          USB_R: code = AMIGA_R; break;
		case          USB_T: code = AMIGA_T; break;
		case          USB_Y: code = AMIGA_Y; break;
		case          USB_U: code = AMIGA_U; break;
		case          USB_I: code = AMIGA_I; break;
		case          USB_O: code = AMIGA_O; break;
		case          USB_P: code = AMIGA_P; break;
		case       USB_RWIN: code = AMIGA_RAMIGA; break;
		case      USB_NP_UP: code = AMIGA_UP; break;
		case    USB_NP_DOWN: code = AMIGA_DOWN; break;
		case    USB_NP_LEFT: code = AMIGA_LEFT; break;
		case   USB_NP_RIGHT: code = AMIGA_RIGHT; break;
		case 100: code = AMIGA_LSHIFT; break;
		default: code = key; break;
	}

	return code;
}

void send_amiga_kbd(uint8_t key) {
	pinMode(DAT, OUTPUT);
	digitalWrite(DAT, 1-((key >> 6) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 5) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 4) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 3) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 2) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 1) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 0) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	digitalWrite(DAT, 1-((key >> 7) & 1) ); delayMicroseconds(DELAY);
	digitalWrite(CLK, LOW); delayMicroseconds(DELAY);
	digitalWrite(CLK, HIGH); delayMicroseconds(DELAY);
	pinMode(DAT, INPUT_PULLUP);
}

class KbdRptParser : public KeyboardReportParser {
	void PrintKey(uint8_t mod, uint8_t key);	
protected:
	void OnControlKeysChanged(uint8_t before, uint8_t after);
	void OnKeyDown(uint8_t mod, uint8_t key);
	void OnKeyUp(uint8_t mod, uint8_t key);
	void OnKeyPressed(uint8_t key);
};

void KbdRptParser::PrintKey(uint8_t mod, uint8_t key) {
};

void KbdRptParser::OnControlKeysChanged(uint8_t before, uint8_t after) {
	uint8_t a, b;
	a = after;
	b = before;

	Serial1.print("C ");
	Serial1.println(a);

	if(((a & USB_LSHIFT) == USB_LSHIFT) && ((b & USB_LSHIFT) == 0))
		send_amiga_kbd(AMIGA_LSHIFT);
	if(((a & USB_LSHIFT) == 0) && ((b & USB_LSHIFT) == USB_LSHIFT))
		send_amiga_kbd(AMIGA_LSHIFT|0x80);

	if(((a & USB_LCTRL) == USB_LCTRL) && ((b & USB_LCTRL) == 0))
		send_amiga_kbd(AMIGA_CTRL);
	if(((a & USB_LCTRL) == 0) && ((b & USB_LCTRL) == USB_LCTRL))
		send_amiga_kbd(AMIGA_CTRL|0x80);

	if(((a & USB_LALT) == USB_LALT) && ((b & USB_LALT) == 0))
		send_amiga_kbd(AMIGA_ALT);
	if(((a & USB_LALT) == 0) && ((b & USB_LALT) == USB_LALT))
		send_amiga_kbd(AMIGA_ALT|0x80);

	if(((a & USB_LWIN) == USB_LWIN) && ((b & USB_LWIN) == 0))
		send_amiga_kbd(AMIGA_LAMIGA);
	if(((a & USB_LWIN) == 0) && ((b & USB_LWIN) == USB_LWIN))
		send_amiga_kbd(AMIGA_LAMIGA|0x80);

	before = a;
}

void KbdRptParser::OnKeyDown(uint8_t mod, uint8_t key) {
	Serial1.print("D ");
	Serial1.println(key);

	switch(key) {
		case USB_F12: // F12 -> boot our Amiga
			digitalWrite(RST, LOW);
			delay(100);
			digitalWrite(RST, HIGH);
			break;
		case USB_TILDE:
			pinMode(JF, OUTPUT);
			digitalWrite(JF, LOW);
			break;
		case USB_UP:
			pinMode(JU, OUTPUT);
			digitalWrite(JU, LOW);
			break;
		case USB_DOWN:
			pinMode(JD, OUTPUT);
			digitalWrite(JD, LOW);
			break;
		case USB_LEFT:
			pinMode(JL, OUTPUT);
			digitalWrite(JL, LOW);
			break;
		case USB_RIGHT:
			pinMode(JR, OUTPUT);
			digitalWrite(JR, LOW);
			break;
		default:
			key = convert(key);
			send_amiga_kbd(key);
	}

}

void KbdRptParser::OnKeyUp(uint8_t mod, uint8_t key) {
//	Serial1.print('U');
//	Serial1.println(key);

	switch(key) {
		case USB_TILDE:
			digitalWrite(JF, HIGH);
			pinMode(JF, INPUT);
			break;
		case USB_UP:
			digitalWrite(JU, HIGH);
			pinMode(JU, INPUT);
			break;
		case USB_DOWN:
			digitalWrite(JD, HIGH);
			pinMode(JD, INPUT);
			break;
		case USB_LEFT:
			digitalWrite(JL, HIGH);
			pinMode(JL, INPUT);
			break;
		case USB_RIGHT:
			digitalWrite(JR, HIGH);
			pinMode(JR, INPUT);
			break;
		default:
			key = convert(key);
			send_amiga_kbd(key|0x80);
	}
}

void KbdRptParser::OnKeyPressed(uint8_t key) {
}

class MouseRptParser : public MouseReportParser {
protected:
	void OnMouseMove(MOUSEINFO *mi);
	void OnLeftButtonUp(MOUSEINFO *mi);
	void OnLeftButtonDown(MOUSEINFO *mi);
	void OnRightButtonUp(MOUSEINFO *mi);
	void OnRightButtonDown(MOUSEINFO *mi);
};

void MouseRptParser::OnMouseMove(MOUSEINFO *mi) {
	int8_t x = mi->dX;
	int8_t y = mi->dY;


	if(x>0) digitalWrite(MH, 1);
	if(y>0)	digitalWrite(MV, 1);

	if(x<0) digitalWrite(MHQ, 1);
	if(y<0) digitalWrite(MVQ, 1);

	delayMicroseconds(DELAY);

	if(x>0) digitalWrite(MHQ, 1);
	if(y>0) digitalWrite(MVQ, 1);

	if(x<0) digitalWrite(MH, 1);
	if(y<0)	digitalWrite(MV, 1);

	delayMicroseconds(DELAY);


	if(x>0) digitalWrite(MH, 0);
	if(y>0)	digitalWrite(MV, 0);

	if(x<0) digitalWrite(MHQ, 0);
	if(y<0)	digitalWrite(MVQ, 0);

	delayMicroseconds(DELAY);

	if(x>0) digitalWrite(MHQ, 0);
	if(y>0) digitalWrite(MVQ, 0);

	if(x<0) digitalWrite(MH, 0);
	if(y<0) digitalWrite(MV, 0);

	delayMicroseconds(DELAY);
}

void MouseRptParser::OnLeftButtonUp(MOUSEINFO *mi) {
	Serial1.println("Lup");
	digitalWrite(M1, HIGH);
	pinMode(M1, INPUT);
}

void MouseRptParser::OnLeftButtonDown(MOUSEINFO *mi) {
	Serial1.println("Ldown");
	pinMode(M1, OUTPUT);
	digitalWrite(M1, LOW);
}

void MouseRptParser::OnRightButtonUp(MOUSEINFO *mi) {
	Serial1.println("Rup");
	digitalWrite(M2, HIGH);
	pinMode(M2, INPUT);
}

void MouseRptParser::OnRightButtonDown(MOUSEINFO *mi) {
	Serial1.println("Rdown");
	pinMode(M2, OUTPUT);
	digitalWrite(M2, LOW);
}


USBHost usb;
HIDBoot<HID_PROTOCOL_KEYBOARD|HID_PROTOCOL_MOUSE> HidComposite(&usb);
HIDBoot<HID_PROTOCOL_KEYBOARD> HidKeyboard(&usb);
HIDBoot<HID_PROTOCOL_MOUSE> HidMouse(&usb);
KbdRptParser Prs;
MouseRptParser MPrs;

void setup() {
	pinMode(MV, OUTPUT);
	pinMode(MVQ, OUTPUT);
	pinMode(MH, OUTPUT);
	pinMode(MHQ, OUTPUT);

	pinMode(JF, INPUT);
	pinMode(JU, INPUT);
	pinMode(JD, INPUT);
	pinMode(JL, INPUT);
	pinMode(JR, INPUT);

	pinMode(RST, OUTPUT);
	pinMode(CLK, OUTPUT);
	pinMode(DAT, OUTPUT);
	digitalWrite(CLK, HIGH);
	digitalWrite(DAT, HIGH);
	digitalWrite(RST, HIGH);
	pinMode(DAT, INPUT_PULLUP);
	Serial1.begin(115200);
	if(usb.Init() == -1);
	delay(200);
	HidComposite.SetReportParser(0, &Prs);
	HidComposite.SetReportParser(1, &MPrs);
	HidKeyboard.SetReportParser(0, &Prs);
	HidMouse.SetReportParser(0, &MPrs);
	Serial1.println("Started...");
	delay(100);
}

void loop() {
	usb.Task();
}
