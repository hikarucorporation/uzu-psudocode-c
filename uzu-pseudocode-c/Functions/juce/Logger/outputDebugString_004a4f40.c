// Function : outputDebugString
// Namespace: juce:Logger
// Entry    : 004a4f40
// Prototype: undefined outputDebugString(char * param_1)
// Body     : 004a4f40 - 004a4fdf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Logger::outputDebugString(juce::String const&) */

void __cdecl juce::Logger::outputDebugString(char *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 == (char *)0x0) {
    puVar4 = (undefined8 *)(PTR_cerr_00715e08 + *(long *)(*(long *)PTR_cerr_00715e08 + -0x18));
    std::ios::clear(puVar4,*(uint *)(PTR_cerr_00715e08 +
                                    *(long *)(*(long *)PTR_cerr_00715e08 + -0x18) + 0x20) | 1);
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (param_1[lVar2] != '\0');
    puVar4 = (undefined8 *)PTR_cerr_00715e08;
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cerr_00715e08,param_1,lVar3);
  }
  plVar1 = *(long **)(PTR_cerr_00715e08 + *(long *)(*(long *)PTR_cerr_00715e08 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
    *puVar4 = 0;
    puVar4[3] = 4;
    *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    *(undefined1 *)((long)puVar4 + 0x24) = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    return;
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put((char)PTR_cerr_00715e08);
  std::ostream::flush();
  return;
}


