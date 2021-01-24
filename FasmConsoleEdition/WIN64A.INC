
; Win64 programming headers (ASCII)

include 'struct.inc'
include 'proc64.inc'
include 'com64.inc'
include 'import64.inc'
include 'export.inc'
include 'resource.inc'

struc TCHAR [val] { common match any, val \{ . db val \}
			   match , val \{ . db ? \} }
sizeof.TCHAR = 1

include 'kernele64.inc'
include 'usere64.inc'
include 'gdie32.inc'
include 'comctle64.inc'
include 'comdlge64.inc'
include 'shelle64.inc'

macro api [name] { if used name
		    label name qword at name#A
		   end if }

