// Function : __tuple_cmp<std::partial_ordering,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,7ul,8ul,9ul,10ul,11ul,12ul,13ul>
// Namespace: std
// Entry    : 003265a0
// Prototype: char __tuple_cmp<std::partial_ordering,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,7ul,8ul,9ul,10ul,11ul,12ul,13ul>(byte * param_1, byte * param_2)
// Body     : 003265a0 - 003266c9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::partial_ordering std::__tuple_cmp<std::partial_ordering, std::tuple<juce::String,
   juce::String, juce::Typeface*, std::vector<juce::String, std::allocator<juce::String> >,
   std::vector<juce::FontFeatureSetting, std::allocator<juce::FontFeatureSetting> >,
   juce::TypefaceMetricsKind, float, float, float, float, float, float, bool, bool>,
   std::tuple<juce::String, juce::String, juce::Typeface*, std::vector<juce::String,
   std::allocator<juce::String> >, std::vector<juce::FontFeatureSetting,
   std::allocator<juce::FontFeatureSetting> >, juce::TypefaceMetricsKind, float, float, float,
   float, float, float, bool, bool>, 7ul, 8ul, 9ul, 10ul, 11ul, 12ul, 13ul>(std::tuple<juce::String,
   juce::String, juce::Typeface*, std::vector<juce::String, std::allocator<juce::String> >,
   std::vector<juce::FontFeatureSetting, std::allocator<juce::FontFeatureSetting> >,
   juce::TypefaceMetricsKind, float, float, float, float, float, float, bool, bool> const&,
   std::tuple<juce::String, juce::String, juce::Typeface*, std::vector<juce::String,
   std::allocator<juce::String> >, std::vector<juce::FontFeatureSetting,
   std::allocator<juce::FontFeatureSetting> >, juce::TypefaceMetricsKind, float, float, float,
   float, float, float, bool, bool> const&, std::integer_sequence<unsigned long, 7ul, 8ul, 9ul,
   10ul, 11ul, 12ul, 13ul>) */

char __cdecl
std::
__tuple_cmp<std::partial_ordering,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,std::tuple<juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>,7ul,8ul,9ul,10ul,11ul,12ul,13ul>
          (byte *param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_2 + 0x14);
  cVar3 = (fVar1 != fVar2) * '\x02';
  if (fVar2 < fVar1) {
    cVar3 = '\x01';
  }
  if (fVar1 < fVar2) {
    cVar3 = -1;
  }
  if (cVar3 == '\0') {
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_2 + 0x10);
    cVar3 = (fVar1 != fVar2) * '\x02';
    if (fVar2 < fVar1) {
      cVar3 = '\x01';
    }
    if (fVar1 < fVar2) {
      cVar3 = -1;
    }
    if (cVar3 == '\0') {
      fVar1 = *(float *)(param_1 + 0xc);
      fVar2 = *(float *)(param_2 + 0xc);
      cVar3 = (fVar1 != fVar2) * '\x02';
      if (fVar2 < fVar1) {
        cVar3 = '\x01';
      }
      if (fVar1 < fVar2) {
        cVar3 = -1;
      }
      if (cVar3 == '\0') {
        fVar1 = *(float *)(param_1 + 8);
        fVar2 = *(float *)(param_2 + 8);
        cVar3 = (fVar1 != fVar2) * '\x02';
        if (fVar2 < fVar1) {
          cVar3 = '\x01';
        }
        if (fVar1 < fVar2) {
          cVar3 = -1;
        }
        if (cVar3 == '\0') {
          fVar1 = *(float *)(param_1 + 4);
          fVar2 = *(float *)(param_2 + 4);
          cVar4 = '\x01';
          if (fVar1 <= fVar2) {
            cVar4 = (fVar1 != fVar2) * '\x02';
          }
          cVar3 = -1;
          if (fVar2 <= fVar1) {
            cVar3 = cVar4;
          }
          if (cVar3 == '\0') {
            if (param_1[1] != param_2[1]) {
              return (param_2[1] <= param_1[1]) * '\x02' + -1;
            }
            cVar3 = (*param_2 <= *param_1) * '\x02' + -1;
            if (*param_1 == *param_2) {
              cVar3 = '\0';
            }
            return cVar3;
          }
        }
      }
    }
  }
  return cVar3;
}


