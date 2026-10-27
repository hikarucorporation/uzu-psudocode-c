// Function : audio_shouldkeepopen
// Namespace: 
// Entry    : 0053cd80
// Prototype: bool audio_shouldkeepopen(void)
// Body     : 0053cd80 - 0053cd98


bool audio_shouldkeepopen(void)

{
  int iVar1;
  
  iVar1 = sys_audioapiopened;
  if (sys_audioapiopened == 0) {
    iVar1 = audio_nextsettings;
  }
  return iVar1 == 5;
}


