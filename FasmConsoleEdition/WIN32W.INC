
; Win32 programming headers (WideChar)

include 'struct.inc'
include 'proc32.inc'
include 'com32.inc'
include 'import32.inc'
include 'export.inc'
include 'resource.inc'

struc TCHAR [val] { common match any, val \{ . du val \}
			   match , val \{ . du ? \} }
sizeof.TCHAR = 2

include 'kernele32.inc'
include 'usere32.inc'
include 'gdie32.inc'
include 'comctle32.inc'
include 'comdlge32.inc'
include 'shelle32.inc'
include 'wsocke32.inc'

macro api [name] { if used name
		    label name dword at name#W
		   end if }
