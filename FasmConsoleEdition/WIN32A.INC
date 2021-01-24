
; Win32 programming headers (ASCII)

include 'struct.inc'
include 'proc32.inc'
include 'com32.inc'
include 'import32.inc'
include 'export.inc'
include 'resource.inc'

struc TCHAR [val] { common match any, val \{ . db val \}
                           match , val \{ . db ? \} }
sizeof.TCHAR = 1

include 'kernele32.inc'
include 'usere32.inc'
include 'gdie32.inc'
include 'comctle32.inc'
include 'comdlge32.inc'
include 'shelle32.inc'
include 'wsocke32.inc'

macro api [name] { if used name
                    label name dword at name#A
                   end if }
