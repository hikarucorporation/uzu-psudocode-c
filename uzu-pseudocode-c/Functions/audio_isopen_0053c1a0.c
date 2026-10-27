// Function : audio_isopen
// Namespace: 
// Entry    : 0053c1a0
// Prototype: bool audio_isopen(void)
// Body     : 0053c1a0 - 0053c1ac


bool audio_isopen(void)

{
  return 0 < sys_audioapiopened;
}


