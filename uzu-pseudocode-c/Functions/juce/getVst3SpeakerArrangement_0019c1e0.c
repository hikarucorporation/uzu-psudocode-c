// Function : getVst3SpeakerArrangement
// Namespace: juce
// Entry    : 0019c1e0
// Prototype: undefined1[16] getVst3SpeakerArrangement(AudioChannelSet * param_1)
// Body     : 0019c1e0 - 0019c961


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::getVst3SpeakerArrangement(juce::AudioChannelSet const&) */

undefined1  [16] __cdecl juce::getVst3SpeakerArrangement(AudioChannelSet *param_1)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar6;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  undefined8 extraout_RDX_18;
  undefined8 extraout_RDX_19;
  undefined8 extraout_RDX_20;
  undefined8 extraout_RDX_21;
  undefined8 extraout_RDX_22;
  undefined8 extraout_RDX_23;
  undefined8 extraout_RDX_24;
  undefined8 extraout_RDX_25;
  undefined8 extraout_RDX_26;
  undefined8 extraout_RDX_27;
  undefined8 extraout_RDX_28;
  undefined8 extraout_RDX_29;
  undefined8 extraout_RDX_30;
  undefined8 extraout_RDX_31;
  undefined8 extraout_RDX_32;
  undefined8 extraout_RDX_33;
  undefined8 extraout_RDX_34;
  undefined8 extraout_RDX_35;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  AudioChannelSet *local_68 [5];
  void *local_40;
  int local_34;
  
  bVar2 = AudioChannelSet::operator==(param_1,(long *)&DAT_0071b698);
  if (bVar2) {
    puVar4 = &Ambisonics::mappings;
    uVar6 = extraout_RDX;
LAB_0019c240:
    uVar5 = *puVar4;
  }
  else {
    bVar2 = AudioChannelSet::operator==(param_1,(long *)&DAT_0071b6c8);
    if (bVar2) {
      puVar4 = &DAT_0071b6c0;
      uVar6 = extraout_RDX_00;
      goto LAB_0019c240;
    }
    bVar2 = AudioChannelSet::operator==(param_1,(long *)&DAT_0071b6f8);
    if (bVar2) {
      puVar4 = &DAT_0071b6f0;
      uVar6 = extraout_RDX_01;
      goto LAB_0019c240;
    }
                    /* try { // try from 0019c25b to 0019c582 has its CatchHandler @ 0019c97a */
    puVar4 = &detail::layoutTable;
    local_68[0] = param_1;
    uVar5 = __gnu_cxx::__ops::
            _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>::
            operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                        *)local_68,0x704a20);
    uVar6 = extraout_RDX_02;
    if ((char)uVar5 == '\0') {
      puVar4 = (ulong *)&DAT_00704a38;
      uVar5 = __gnu_cxx::__ops::
              _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>::
              operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                          *)local_68,0x704a38);
      uVar6 = extraout_RDX_03;
      if ((char)uVar5 == '\0') {
        puVar4 = (ulong *)&DAT_00704a50;
        uVar5 = __gnu_cxx::__ops::
                _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>::
                operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                            *)local_68,0x704a50);
        uVar6 = extraout_RDX_04;
        if ((char)uVar5 == '\0') {
          puVar4 = (ulong *)&DAT_00704a68;
          uVar5 = __gnu_cxx::__ops::
                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>::
                  operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                              *)local_68,0x704a68);
          uVar6 = extraout_RDX_05;
          if ((char)uVar5 == '\0') {
            puVar4 = (ulong *)&DAT_00704a80;
            uVar5 = __gnu_cxx::__ops::
                    _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>::
                    operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                *)local_68,0x704a80);
            uVar6 = extraout_RDX_06;
            if ((char)uVar5 == '\0') {
              puVar4 = (ulong *)&DAT_00704a98;
              uVar5 = __gnu_cxx::__ops::
                      _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                      ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                    *)local_68,0x704a98);
              uVar6 = extraout_RDX_07;
              if ((char)uVar5 == '\0') {
                puVar4 = (ulong *)&DAT_00704ab0;
                uVar5 = __gnu_cxx::__ops::
                        _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                        ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                      *)local_68,0x704ab0);
                uVar6 = extraout_RDX_08;
                if ((char)uVar5 == '\0') {
                  puVar4 = (ulong *)&DAT_00704ac8;
                  uVar5 = __gnu_cxx::__ops::
                          _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                          ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                        *)local_68,0x704ac8);
                  uVar6 = extraout_RDX_09;
                  if ((char)uVar5 == '\0') {
                    puVar4 = (ulong *)&DAT_00704ae0;
                    uVar5 = __gnu_cxx::__ops::
                            _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                            ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                          *)local_68,0x704ae0);
                    uVar6 = extraout_RDX_10;
                    if ((char)uVar5 == '\0') {
                      puVar4 = (ulong *)&DAT_00704af8;
                      uVar5 = __gnu_cxx::__ops::
                              _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                              ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                            *)local_68,0x704af8);
                      uVar6 = extraout_RDX_11;
                      if ((char)uVar5 == '\0') {
                        puVar4 = (ulong *)&DAT_00704b10;
                        uVar5 = __gnu_cxx::__ops::
                                _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                              *)local_68,0x704b10);
                        uVar6 = extraout_RDX_12;
                        if ((char)uVar5 == '\0') {
                          puVar4 = (ulong *)&DAT_00704b28;
                          uVar5 = __gnu_cxx::__ops::
                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                  ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                *)local_68,0x704b28);
                          uVar6 = extraout_RDX_13;
                          if ((char)uVar5 == '\0') {
                            puVar4 = (ulong *)&DAT_00704b40;
                            uVar5 = __gnu_cxx::__ops::
                                    _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                    ::operator()((_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704b40);
                            uVar6 = extraout_RDX_14;
                            if ((char)uVar5 == '\0') {
                              puVar4 = (ulong *)&DAT_00704b58;
                              uVar5 = __gnu_cxx::__ops::
                                      _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                      ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704b58);
                              uVar6 = extraout_RDX_15;
                              if ((char)uVar5 == '\0') {
                                puVar4 = (ulong *)&DAT_00704b70;
                                uVar5 = __gnu_cxx::__ops::
                                        _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                        ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704b70);
                                uVar6 = extraout_RDX_16;
                                if ((char)uVar5 == '\0') {
                                  puVar4 = (ulong *)&DAT_00704b88;
                                  uVar5 = __gnu_cxx::__ops::
                                          _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                          ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704b88);
                                  uVar6 = extraout_RDX_17;
                                  if ((char)uVar5 == '\0') {
                                    puVar4 = (ulong *)&DAT_00704ba0;
                                    uVar5 = __gnu_cxx::__ops::
                                            _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                            ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704ba0);
                                    uVar6 = extraout_RDX_18;
                                    if ((char)uVar5 == '\0') {
                                      puVar4 = (ulong *)&DAT_00704bb8;
                                      uVar5 = __gnu_cxx::__ops::
                                              _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                              ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704bb8);
                                      uVar6 = extraout_RDX_19;
                                      if ((char)uVar5 == '\0') {
                                        puVar4 = (ulong *)&DAT_00704bd0;
                                        uVar5 = __gnu_cxx::__ops::
                                                _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704bd0);
                                        uVar6 = extraout_RDX_20;
                                        if ((char)uVar5 == '\0') {
                                          puVar4 = (ulong *)&DAT_00704be8;
                                          uVar5 = __gnu_cxx::__ops::
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704be8);
                                          uVar6 = extraout_RDX_21;
                                          if ((char)uVar5 == '\0') {
                                            puVar4 = (ulong *)&DAT_00704c00;
                                            uVar5 = __gnu_cxx::__ops::
                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c00);
                                            uVar6 = extraout_RDX_22;
                                            if ((char)uVar5 == '\0') {
                                              puVar4 = (ulong *)&DAT_00704c18;
                                              uVar5 = __gnu_cxx::__ops::
                                                                                                            
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c18);
                                              uVar6 = extraout_RDX_23;
                                              if ((char)uVar5 == '\0') {
                                                puVar4 = (ulong *)&DAT_00704c30;
                                                uVar5 = __gnu_cxx::__ops::
                                                                                                                
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c30);
                                                uVar6 = extraout_RDX_24;
                                                if ((char)uVar5 == '\0') {
                                                  puVar4 = (ulong *)&DAT_00704c48;
                                                  uVar5 = __gnu_cxx::__ops::
                                                                                                                    
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c48);
                                                  uVar6 = extraout_RDX_25;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704c60;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c60);
                                                  uVar6 = extraout_RDX_26;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704c78;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c78);
                                                  uVar6 = extraout_RDX_27;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704c90;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704c90);
                                                  uVar6 = extraout_RDX_28;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704ca8;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704ca8);
                                                  uVar6 = extraout_RDX_29;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704cc0;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704cc0);
                                                  uVar6 = extraout_RDX_30;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704cd8;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704cd8);
                                                  uVar6 = extraout_RDX_31;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704cf0;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704cf0);
                                                  uVar6 = extraout_RDX_32;
                                                  if ((char)uVar5 == '\0') {
                                                    puVar4 = (ulong *)&DAT_00704d08;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704d08);
                                                  uVar6 = extraout_RDX_33;
                                                  if ((char)uVar5 == '\0') {
                    /* try { // try from 0019c587 to 0019c598 has its CatchHandler @ 0019c972 */
                                                    puVar4 = (ulong *)&DAT_00704d20;
                                                    uVar5 = __gnu_cxx::__ops::
                                                                                                                        
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>
                                                  ::operator()((
                                                  _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3>
                                                  *)local_68,0x704d20);
                                                  uVar6 = extraout_RDX_34;
                                                  if ((char)uVar5 == '\0') {
                    /* try { // try from 0019c5a5 to 0019c5b1 has its CatchHandler @ 0019c96a */
                                                    AudioChannelSet::getChannelTypes
                                                              (&local_40,(long *)param_1);
                                                    pvVar1 = local_40;
                                                    if ((long)local_34 == 0) {
                                                      local_34 = 0;
                                                      free(local_40);
LAB_0019c94c:
                                                      uVar5 = 0;
                                                      iVar7 = 0;
                                                    }
                                                    else {
                                                      lVar8 = 0;
                                                      uVar5 = 0;
                                                      do {
                                                        uVar9 = 1;
                                                        switch(*(undefined4 *)((long)pvVar1 + lVar8)
                                                              ) {
                                                        case 1:
                                                          break;
                                                        case 2:
                                                          uVar9 = 2;
                                                          break;
                                                        case 3:
                    /* try { // try from 0019c5fe to 0019c605 has its CatchHandler @ 0019c962 */
                                                          AudioChannelSet::mono
                                                                    ((AudioChannelSet *)local_68);
                                                          bVar2 = AudioChannelSet::operator==
                                                                            (param_1,(long *)
                                                  local_68);
                                                  uVar9 = 4;
                                                  if (bVar2) {
                                                    uVar9 = 0x80000;
                                                  }
                                                  BigInteger::~BigInteger((BigInteger *)local_68);
                                                  break;
                                                  case 4:
                                                    uVar9 = 8;
                                                    break;
                                                  case 5:
                                                    uVar9 = 0x10;
                                                    break;
                                                  case 6:
                                                    uVar9 = 0x20;
                                                    break;
                                                  case 7:
                                                    uVar9 = 0x40;
                                                    break;
                                                  case 8:
                                                    uVar9 = 0x80;
                                                    break;
                                                  case 9:
                                                    uVar9 = 0x100;
                                                    break;
                                                  case 10:
                                                    uVar9 = 0x200;
                                                    break;
                                                  case 0xb:
                                                    uVar9 = 0x400;
                                                    break;
                                                  case 0xc:
                                                    uVar9 = 0x800;
                                                    break;
                                                  case 0xd:
                                                    uVar9 = 0x1000;
                                                    break;
                                                  case 0xe:
                                                    uVar9 = 0x2000;
                                                    break;
                                                  case 0xf:
                                                    uVar9 = 0x4000;
                                                    break;
                                                  case 0x10:
                                                    uVar9 = 0x8000;
                                                    break;
                                                  case 0x11:
                                                    uVar9 = 0x10000;
                                                    break;
                                                  case 0x12:
                                                    uVar9 = 0x20000;
                                                    break;
                                                  case 0x13:
                                                    uVar9 = 0x40000;
                                                    break;
                                                  case 0x14:
                                                    uVar9 = 0x4000000;
                                                    break;
                                                  case 0x15:
                                                    uVar9 = 0x8000000;
                                                    break;
                                                  case 0x16:
                                                    uVar9 = 0x800000000000000;
                                                    break;
                                                  case 0x17:
                                                    uVar9 = 0x1000000000000000;
                                                    break;
                                                  case 0x18:
                                                    uVar9 = 0x100000;
                                                    break;
                                                  case 0x19:
                                                    uVar9 = 0x200000;
                                                    break;
                                                  case 0x1a:
                                                    uVar9 = 0x400000;
                                                    break;
                                                  case 0x1b:
                                                    uVar9 = 0x800000;
                                                    break;
                                                  case 0x1c:
                                                    uVar9 = 0x1000000;
                                                    break;
                                                  case 0x1d:
                                                    uVar9 = 0x2000000;
                                                    break;
                                                  case 0x1e:
                                                    uVar9 = 0x4000000000;
                                                    break;
                                                  case 0x1f:
                                                    uVar9 = 0x8000000000;
                                                    break;
                                                  case 0x20:
                                                    uVar9 = 0x10000000000;
                                                    break;
                                                  case 0x21:
                                                    uVar9 = 0x20000000000;
                                                    break;
                                                  case 0x22:
                                                    uVar9 = 0x40000000000;
                                                    break;
                                                  case 0x23:
                                                    uVar9 = 0x80000000000;
                                                    break;
                                                  case 0x24:
                                                    uVar9 = 0x100000000000;
                                                    break;
                                                  case 0x25:
                                                    uVar9 = 0x200000000000;
                                                    break;
                                                  case 0x26:
                                                    uVar9 = 0x400000000000;
                                                    break;
                                                  case 0x27:
                                                    uVar9 = 0x800000000000;
                                                    break;
                                                  case 0x28:
                                                    uVar9 = 0x1000000000000;
                                                    break;
                                                  case 0x29:
                                                    uVar9 = 0x2000000000000;
                                                    break;
                                                  case 0x2a:
                                                    uVar9 = 0x4000000000000;
                                                    break;
                                                  case 0x2b:
                                                    uVar9 = 0x8000000000000;
                                                    break;
                                                  case 0x2c:
                                                    uVar9 = 0x10000000000000;
                                                    break;
                                                  case 0x2d:
                                                    uVar9 = 0x20000000000000;
                                                    break;
                                                  case 0x2e:
                                                    uVar9 = 0x40000000000000;
                                                    break;
                                                  case 0x2f:
                                                    uVar9 = 0x80000000000000;
                                                    break;
                                                  case 0x30:
                                                    uVar9 = 0x100000000000000;
                                                    break;
                                                  case 0x31:
                                                    uVar9 = 0x200000000000000;
                                                    break;
                                                  case 0x32:
                                                    uVar9 = 0x400000000000000;
                                                    break;
                                                  default:
                                                    goto switchD_0019c5f1_caseD_33;
                                                  case 0x3e:
                                                    uVar9 = 0x10000000;
                                                    break;
                                                  case 0x3f:
                                                    uVar9 = 0x20000000;
                                                    break;
                                                  case 0x40:
                                                    uVar9 = 0x40000000;
                                                    break;
                                                  case 0x41:
                                                    uVar9 = 0x80000000;
                                                    break;
                                                  case 0x42:
                                                    uVar9 = 0x100000000;
                                                    break;
                                                  case 0x43:
                                                    uVar9 = 0x200000000;
                                                    break;
                                                  case 0x44:
                                                    uVar9 = 0x400000000;
                                                    break;
                                                  case 0x45:
                                                    uVar9 = 0x800000000;
                                                    break;
                                                  case 0x46:
                                                    uVar9 = 0x1000000000;
                                                    break;
                                                  case 0x47:
                                                    uVar9 = 0x2000000000;
                                                    break;
                                                  case 0x80:
                                                    uVar9 = 0x80000;
                                                  }
                                                  uVar5 = uVar5 | uVar9;
switchD_0019c5f1_caseD_33:
                                                  lVar8 = lVar8 + 4;
                                                  } while ((long)local_34 * 4 != lVar8);
                                                  local_34 = 0;
                                                  free(local_40);
                                                  if (uVar5 == 0) goto LAB_0019c94c;
                                                  iVar7 = 0;
                                                  uVar9 = uVar5;
                                                  do {
                                                    iVar7 = iVar7 + ((uint)uVar9 & 1);
                                                    bVar2 = 1 < uVar9;
                                                    uVar9 = uVar9 >> 1;
                                                  } while (bVar2);
                                                  }
                                                  iVar3 = AudioChannelSet::size(param_1);
                                                  uVar6 = CONCAT71((int7)((ulong)extraout_RDX_35 >>
                                                                         8),iVar7 == iVar3);
                                                  goto LAB_0019c245;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = *puVar4;
  }
  uVar6 = CONCAT71((int7)((ulong)uVar6 >> 8),1);
LAB_0019c245:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar5;
  return auVar10;
}


