// Function : soundfile_strerror
// Namespace: 
// Entry    : 00599dc0
// Prototype: char * soundfile_strerror(int param_1)
// Body     : 00599dc0 - 00599ddd


char * soundfile_strerror(int param_1)

{
  char *pcVar1;
  
  if (param_1 + 0x3ebU < 4) {
    return (&PTR_s_unsupported_sample_format_007150e8)[(int)(param_1 + 0x3ebU)];
  }
  pcVar1 = strerror(param_1);
  return pcVar1;
}


