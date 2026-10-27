// Function : png_chunk_report
// Namespace: juce:pnglibNamespace
// Entry    : 003a5c70
// Prototype: undefined png_chunk_report(pnglibNamespace * param_1, char * param_2, int param_3)
// Body     : 003a5c70 - 003a5c9e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_chunk_report(juce::pnglibNamespace::png_struct_def const*, char
   const*, int) */

void __cdecl
juce::pnglibNamespace::png_chunk_report(pnglibNamespace *param_1,char *param_2,int param_3)

{
  if (((byte)param_1[0x4d] & 0x80) == 0) {
    if (((byte)param_1[0x52] & 0x40) != 0) {
      png_warning((long)param_1,param_2);
      return;
    }
  }
  else {
    if (param_3 < 2) {
      png_chunk_warning((long)param_1,(long)param_2);
      return;
    }
    if (((byte)param_1[0x52] & 0x10) != 0) {
      png_chunk_warning((long)param_1,(long)param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


