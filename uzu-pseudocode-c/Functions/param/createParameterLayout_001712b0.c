// Function : createParameterLayout
// Namespace: param
// Entry    : 001712b0
// Prototype: ParameterLayout * createParameterLayout(param * this)
// Body     : 001712b0 - 00171b6e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* param::createParameterLayout() */

ParameterLayout * __thiscall param::createParameterLayout(param *this)

{
  long *plVar1;
  param *this_00;
  long *plVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  code *local_b0;
  code *pcStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_70;
  code *pcStack_68;
  long *local_58;
  long *plStack_50;
  undefined8 local_48;
  param *local_38;
  
  local_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  local_48 = 0;
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 0017136f to 00171393 has its CatchHandler @ 00171c7e */
  local_38 = this;
  createParam(DAT_005d94c0,
              (vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
               *)&local_58,0,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 001713a3 to 001713ac has its CatchHandler @ 00171c57 */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 001713bc to 001713c5 has its CatchHandler @ 00171c4f */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 001713d5 to 001713de has its CatchHandler @ 00171c47 */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 00171447 to 00171469 has its CatchHandler @ 00171c7c */
  createParam(0,(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                 *)&local_58,1,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 00171479 to 00171482 has its CatchHandler @ 00171c3f */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 00171492 to 0017149b has its CatchHandler @ 00171c37 */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 001714ab to 001714b4 has its CatchHandler @ 00171c2f */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 0017151d to 0017153f has its CatchHandler @ 00171c7a */
  createParam(0,(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                 *)&local_58,2,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 0017154f to 00171558 has its CatchHandler @ 00171c27 */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 00171568 to 00171571 has its CatchHandler @ 00171c1f */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 00171581 to 0017158a has its CatchHandler @ 00171c17 */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 001715f3 to 0017161a has its CatchHandler @ 00171c78 */
  createParam(DAT_005d94c0,
              (vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
               *)&local_58,3,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 0017162a to 00171633 has its CatchHandler @ 00171c0f */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 00171643 to 0017164c has its CatchHandler @ 00171c07 */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 0017165c to 00171665 has its CatchHandler @ 00171bff */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 001716ce to 001716f5 has its CatchHandler @ 00171c76 */
  createParam(DAT_005d94c4,
              (vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
               *)&local_58,4,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 00171705 to 0017170e has its CatchHandler @ 00171bf7 */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 0017171e to 00171727 has its CatchHandler @ 00171bef */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 00171737 to 00171740 has its CatchHandler @ 00171be7 */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 001717a9 to 001717cb has its CatchHandler @ 00171c74 */
  createParam(0,(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                 *)&local_58,5,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 001717db to 001717e4 has its CatchHandler @ 00171bdf */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 001717f4 to 001717fd has its CatchHandler @ 00171bd7 */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 0017180d to 00171816 has its CatchHandler @ 00171bcf */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d9490;
  uStack_d0 = _UNK_005d9498;
  local_c8 = 0;
  pcStack_a8 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
               ::_M_invoke;
  local_c0 = 0x42c80000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#1}>
             ::_M_manager;
  pcStack_88 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
               ::_M_invoke;
  local_a0 = 0x3c23d70a;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
             ::_M_manager;
  pcStack_68 = std::
               _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
               ::_M_invoke;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = std::
             _Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
             ::_M_manager;
                    /* try { // try from 0017187f to 001718a6 has its CatchHandler @ 00171c72 */
  createParam(DAT_005d94c0,
              (vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
               *)&local_58,6,&local_d8,5,1);
  this_00 = local_38;
  if (local_70 != (code *)0x0) {
                    /* try { // try from 001718be to 001718c7 has its CatchHandler @ 00171bc7 */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 001718d7 to 001718e0 has its CatchHandler @ 00171bbf */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 001718f0 to 001718f9 has its CatchHandler @ 00171bb7 */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d94a0;
  uStack_d0 = _UNK_005d94a8;
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = (code *)0x0;
  pcStack_a8 = (code *)0x0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = (code *)0x0;
  pcStack_88 = (code *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (code *)0x0;
  pcStack_68 = (code *)0x0;
                    /* try { // try from 0017192b to 0017194d has its CatchHandler @ 00171c70 */
  createParam(0,(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                 *)&local_58,7,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 0017195d to 00171966 has its CatchHandler @ 00171baf */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 00171976 to 0017197f has its CatchHandler @ 00171ba7 */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 0017198f to 00171998 has its CatchHandler @ 00171b9f */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d94a0;
  uStack_d0 = _UNK_005d94a8;
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = (code *)0x0;
  pcStack_a8 = (code *)0x0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = (code *)0x0;
  pcStack_88 = (code *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (code *)0x0;
  pcStack_68 = (code *)0x0;
                    /* try { // try from 001719ca to 001719ec has its CatchHandler @ 00171c6e */
  createParam(0,(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                 *)&local_58,8,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 001719fc to 00171a05 has its CatchHandler @ 00171b97 */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 00171a15 to 00171a1e has its CatchHandler @ 00171b8f */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 00171a2e to 00171a37 has its CatchHandler @ 00171b87 */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  local_d8 = _DAT_005d94b0;
  uStack_d0 = _UNK_005d94b8;
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = (code *)0x0;
  pcStack_a8 = (code *)0x0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = (code *)0x0;
  pcStack_88 = (code *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (code *)0x0;
  pcStack_68 = (code *)0x0;
                    /* try { // try from 00171a69 to 00171a8b has its CatchHandler @ 00171c6c */
  createParam(0,(vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                 *)&local_58,9,&local_d8,5,1);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 00171a9b to 00171aa4 has its CatchHandler @ 00171b7f */
    (*local_70)(&local_80,&local_80,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 00171ab4 to 00171abd has its CatchHandler @ 00171b77 */
    (*local_90)(&local_a0,&local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 00171acd to 00171ad6 has its CatchHandler @ 00171b6f */
    (*local_b0)(&local_c0,&local_c0,3);
  }
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
                    /* try { // try from 00171af6 to 00171afd has its CatchHandler @ 00171c5f */
  juce::AudioProcessorValueTreeState::ParameterLayout::
  add<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>,__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>>
            ((ParameterLayout *)this_00,local_58,plStack_50);
  plVar1 = plStack_50;
  for (plVar2 = local_58; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    *plVar2 = 0;
  }
  if (local_58 != (long *)0x0) {
    operator_delete(local_58);
  }
  return (ParameterLayout *)this_00;
}


