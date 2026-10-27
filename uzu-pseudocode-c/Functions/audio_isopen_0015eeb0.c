// Function : audio_isopen
// Namespace: 
// Entry    : 0015eeb0
// Prototype: bool audio_isopen(void)
// Body     : 0015eeb0 - 0015eeb5


bool audio_isopen(void)

{
  bool bVar1;
  
  bVar1 = (bool)(*(code *)PTR_audio_isopen_00717f58)();
  return bVar1;
}


