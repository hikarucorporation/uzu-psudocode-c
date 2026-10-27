// Function : png_colorspace_endpoints_match
// Namespace: juce:pnglibNamespace
// Entry    : 003a5b80
// Prototype: bool png_colorspace_endpoints_match(int * param_1, int * param_2, int param_3)
// Body     : 003a5b80 - 003a5c6b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_colorspace_endpoints_match(juce::pnglibNamespace::png_xy const*,
   juce::pnglibNamespace::png_xy const*, int) */

bool __cdecl
juce::pnglibNamespace::png_colorspace_endpoints_match(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_2[6] - param_3 <= param_1[6]) && (param_1[6] <= param_2[6] + param_3)) {
    if ((param_2[7] - param_3 <= param_1[7]) && (param_1[7] <= param_2[7] + param_3)) {
      if ((*param_2 - param_3 <= *param_1) && (*param_1 <= *param_2 + param_3)) {
        if ((param_2[1] - param_3 <= param_1[1]) && (param_1[1] <= param_2[1] + param_3)) {
          if ((param_2[2] - param_3 <= param_1[2]) && (param_1[2] <= param_2[2] + param_3)) {
            if ((param_2[3] - param_3 <= param_1[3]) && (param_1[3] <= param_2[3] + param_3)) {
              if ((param_2[4] - param_3 <= param_1[4]) && (param_1[4] <= param_2[4] + param_3)) {
                bVar1 = param_1[5] <= param_2[5] + param_3 && param_2[5] - param_3 <= param_1[5];
              }
            }
          }
        }
      }
    }
  }
  return bVar1;
}


