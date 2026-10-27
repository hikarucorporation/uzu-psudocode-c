// Function : AudioPluginAudioProcessorEditor
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 00167ab0
// Prototype: undefined AudioPluginAudioProcessorEditor(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, AudioPluginAudioProcessorEditor * this, long param_5)
// Body     : 00167ab0 - 00168a88


/* AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor(AudioPluginAudioProcessor&) */

void __thiscall
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,
          AudioPluginAudioProcessorEditor *this,long param_5)

{
  Component *this_00;
  long lVar1;
  undefined4 uVar2;
  AttachedComboBox *this_01;
  GlyphArrangement *this_02;
  AttachedDial *pAVar3;
  int iVar4;
  float *pfVar5;
  Label *pLVar6;
  uint *puVar7;
  ulong uVar8;
  AttachedInfiniteDial *this_03;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar9;
  float fVar10;
  ImageFileFormat local_140 [16];
  byte *local_130;
  String local_128 [8];
  String local_120 [8];
  AttachedInfiniteDial *local_118;
  Label *local_110;
  AttachedAnimatedButton *local_108;
  AttachedComboBox *local_100;
  Label *local_f8;
  AttachedAnimatedButton *local_f0;
  Label *local_e8;
  Label *local_e0;
  Label *local_d8;
  Label *local_d0;
  AudioPluginAudioProcessorEditor *local_c8;
  Label *local_c0;
  TooltipWindow *local_b8;
  Label *local_b0;
  Label *local_a8;
  GlyphArrangement *local_a0;
  AttachedSlider *local_98;
  Timer *local_90;
  AttachedDial *local_88;
  GlyphArrangement *local_80;
  GlyphArrangement *local_78;
  GlyphArrangement *local_70;
  GlyphArrangement *local_68;
  GlyphArrangement *local_60;
  GlyphArrangement *local_58;
  GlyphArrangement *local_50;
  GlyphArrangement *local_48;
  byte *local_40;
  byte *local_38;
  
  juce::AudioProcessorEditor::AudioProcessorEditor((AudioProcessorEditor *)this,param_5);
  local_90 = (Timer *)(this + 0x168);
  juce::Timer::Timer(local_90);
  *(undefined ***)this = &PTR__AudioPluginAudioProcessorEditor_00700df0;
  *(undefined ***)(this + 0x168) = &PTR__AudioPluginAudioProcessorEditor_00700fd8;
  *(undefined ***)(this + 400) = &PTR__AudioPluginAudioProcessorEditor_00701000;
  *(long *)(this + 0x198) = param_5;
                    /* try { // try from 00167b14 to 00167b20 has its CatchHandler @ 00168f96 */
  uVar9 = AttachedDial::AttachedDial
                    (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                     (AttachedDial *)(this + 0x1a0),param_5,0);
                    /* try { // try from 00167b2f to 00167b8c has its CatchHandler @ 00168fb6 */
  uVar9 = AttachedDial::AttachedDial
                    (uVar9,param_2,param_3,(AttachedDial *)(this + 0x3f0),*(long *)(this + 0x198),2)
  ;
  uVar9 = AttachedDial::AttachedDial
                    (uVar9,param_2,param_3,(AttachedDial *)(this + 0x640),*(long *)(this + 0x198),3)
  ;
  uVar9 = AttachedDial::AttachedDial
                    (uVar9,param_2,param_3,(AttachedDial *)(this + 0x890),*(long *)(this + 0x198),4)
  ;
  uVar9 = AttachedDial::AttachedDial
                    (uVar9,param_2,param_3,(AttachedDial *)(this + 0xae0),*(long *)(this + 0x198),5)
  ;
  local_88 = (AttachedDial *)(this + 0x1a0);
                    /* try { // try from 00167b9b to 00167baf has its CatchHandler @ 00168f8e */
  uVar9 = AttachedInfiniteDial::AttachedInfiniteDial
                    (uVar9,param_2,param_3,(AttachedInfiniteDial *)(this + 0xd30),
                     *(long *)(this + 0x198),1);
  local_98 = (AttachedSlider *)(this + 0xf80);
  local_118 = (AttachedInfiniteDial *)(this + 0xd30);
                    /* try { // try from 00167bbe to 00167bd4 has its CatchHandler @ 00168f86 */
  AttachedSlider::AttachedSlider(uVar9,param_2,param_3,local_98,*(long *)(this + 0x198),6);
                    /* try { // try from 00167be3 to 00167bef has its CatchHandler @ 00168f7e */
  AttachedComboBox::AttachedComboBox((AttachedComboBox *)(this + 0x11b0),*(long *)(this + 0x198),9);
  lVar1 = *(long *)(this + 0x198);
                    /* try { // try from 00167c06 to 00167c14 has its CatchHandler @ 00168f76 */
  local_100 = (AttachedComboBox *)(this + 0x11b0);
  juce::ImageFileFormat::loadFrom(local_140,*(long *)PTR_xy_png_00715b60,0x21f39);
  local_108 = (AttachedAnimatedButton *)(this + 0x1418);
                    /* try { // try from 00167c1c to 00167c53 has its CatchHandler @ 00168f64 */
  AttachedAnimatedButton::AttachedAnimatedButton
            (local_108,lVar1,7,(long *)local_140,0x1d,0xe00000000,0x1c0000000f,0x78);
  lVar1 = *(long *)(this + 0x198);
                    /* try { // try from 00167c65 to 00167c73 has its CatchHandler @ 00168f52 */
  juce::ImageFileFormat::loadFrom
            ((ImageFileFormat *)&local_130,*(long *)PTR_keepbass_png_00715700,0x5088);
  local_f0 = (AttachedAnimatedButton *)(this + 0x1730);
                    /* try { // try from 00167c7b to 00167ca8 has its CatchHandler @ 00168f43 */
  uVar8 = 0xe00000000;
  AttachedAnimatedButton::AttachedAnimatedButton
            (local_f0,lVar1,8,(long *)&local_130,0x1d,0xe00000000,0x1c0000000f,0x78);
  juce::Image::~Image((Image *)&local_130);
  juce::Image::~Image((Image *)local_140);
  this_00 = (Component *)(this + 0x1a70);
  *(undefined8 *)(this + 0x1a58) = 0;
  *(undefined8 *)(this + 0x1a60) = 0;
  *(undefined8 *)(this + 0x1a48) = 0;
  *(undefined8 *)(this + 0x1a50) = 0;
  *(undefined8 *)(this + 0x1a68) = 0;
  juce::Component::Component(this_00);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_110 = (Label *)(this + 0x1b60);
                    /* try { // try from 00167d0b to 00167d1d has its CatchHandler @ 00168f27 */
  juce::Label::Label((Label *)(this + 0x1b60),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  local_a0 = (GlyphArrangement *)(this + 0x1d78);
                    /* try { // try from 00167d39 to 00167d45 has its CatchHandler @ 00168f1f */
  juce::GlyphArrangement::GlyphArrangement(local_a0);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_a8 = (Label *)(this + 0x1d88);
                    /* try { // try from 00167d67 to 00167d7c has its CatchHandler @ 00168f03 */
  juce::Label::Label((Label *)(this + 0x1d88),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_b0 = (Label *)(this + 0x1fa0);
                    /* try { // try from 00167db2 to 00167dc7 has its CatchHandler @ 00168ee7 */
  juce::Label::Label((Label *)(this + 0x1fa0),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_c0 = (Label *)(this + 0x21b8);
                    /* try { // try from 00167dfd to 00167e12 has its CatchHandler @ 00168ecb */
  juce::Label::Label((Label *)(this + 0x21b8),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_d0 = (Label *)(this + 0x23d0);
                    /* try { // try from 00167e48 to 00167e5a has its CatchHandler @ 00168eaf */
  juce::Label::Label((Label *)(this + 0x23d0),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_d8 = (Label *)(this + 0x25e8);
                    /* try { // try from 00167e90 to 00167ea2 has its CatchHandler @ 00168e93 */
  juce::Label::Label((Label *)(this + 0x25e8),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_e0 = (Label *)(this + 0x2800);
                    /* try { // try from 00167ed8 to 00167eea has its CatchHandler @ 00168e77 */
  juce::Label::Label((Label *)(this + 0x2800),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00167f06 to 00167f0d has its CatchHandler @ 00168e6f */
  juce::GlyphArrangement::GlyphArrangement((GlyphArrangement *)(this + 0x2a18));
  local_48 = (GlyphArrangement *)(this + 0x2a18);
                    /* try { // try from 00167f15 to 00167f24 has its CatchHandler @ 00168e67 */
  juce::GlyphArrangement::GlyphArrangement((GlyphArrangement *)(this + 0x2a28));
  local_50 = (GlyphArrangement *)(this + 0x2a28);
                    /* try { // try from 00167f2c to 00167f3b has its CatchHandler @ 00168e5f */
  juce::GlyphArrangement::GlyphArrangement((GlyphArrangement *)(this + 0x2a38));
  local_60 = (GlyphArrangement *)(this + 0x2a48);
  local_58 = (GlyphArrangement *)(this + 0x2a38);
                    /* try { // try from 00167f43 to 00167f57 has its CatchHandler @ 00168e57 */
  juce::GlyphArrangement::GlyphArrangement(local_60);
  local_68 = (GlyphArrangement *)(this + 0x2a58);
                    /* try { // try from 00167f5f to 00167f6b has its CatchHandler @ 00168e4f */
  juce::GlyphArrangement::GlyphArrangement(local_68);
  local_70 = (GlyphArrangement *)(this + 0x2a68);
                    /* try { // try from 00167f73 to 00167f7f has its CatchHandler @ 00168e47 */
  juce::GlyphArrangement::GlyphArrangement(local_70);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
  local_e8 = (Label *)(this + 0x2a78);
                    /* try { // try from 00167fa1 to 00167fb3 has its CatchHandler @ 00168e2b */
  juce::Label::Label((Label *)(this + 0x2a78),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  juce::String::String((String *)local_140);
  juce::String::String((String *)&local_130);
                    /* try { // try from 00167fe9 to 00167ff6 has its CatchHandler @ 00168e0f */
  juce::Label::Label((Label *)(this + 0x2c90),(long *)local_140,(long *)&local_130);
  juce::String::~String((String *)&local_130);
  juce::String::~String((String *)local_140);
  local_f8 = (Label *)(this + 0x2c90);
                    /* try { // try from 00168012 to 0016801e has its CatchHandler @ 00168e07 */
  juce::GlyphArrangement::GlyphArrangement((GlyphArrangement *)(this + 0x2ea8));
  local_78 = (GlyphArrangement *)(this + 0x2ea8);
                    /* try { // try from 00168026 to 00168035 has its CatchHandler @ 00168dff */
  juce::GlyphArrangement::GlyphArrangement((GlyphArrangement *)(this + 0x2eb8));
  local_b8 = (TooltipWindow *)(this + 0x2ec8);
  local_80 = (GlyphArrangement *)(this + 0x2eb8);
                    /* try { // try from 0016803d to 00168059 has its CatchHandler @ 00168df7 */
  juce::TooltipWindow::TooltipWindow(local_b8,this_00,1000);
  if (juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak == '\0') {
    iVar4 = __cxa_guard_acquire(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    if (iVar4 != 0) {
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._0_4_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._8_8_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._16_8_ = 0;
      __cxa_atexit(juce::SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak,
                   juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    }
  }
                    /* try { // try from 0016806f to 00168082 has its CatchHandler @ 00168def */
  local_c8 = this + 0x3018;
  juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x3018),
             (SpinLock *)juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
  uVar2 = juce::Colours::white;
  *(undefined4 *)(this + 0x3028) = juce::Colours::white;
  *(undefined4 *)(this + 0x302c) = uVar2;
  *(undefined4 *)(this + 0x3030) = 0x3f800000;
  lVar1 = *(long *)(this + 0x198);
                    /* try { // try from 001680a9 to 001680b9 has its CatchHandler @ 00168de7 */
  juce::String::String(local_128,(byte *)"1x/5x");
                    /* try { // try from 001680ba to 001680c8 has its CatchHandler @ 00168dda */
  juce::String::toLowerCase((undefined8 *)local_140,(undefined8 *)local_128);
  juce::StringRef::StringRef((StringRef *)&local_130,&DAT_005e3c3c);
                    /* try { // try from 001680df to 001680ed has its CatchHandler @ 00168dc3 */
  juce::String::removeCharacters((undefined8 *)local_120,(undefined8 *)local_140,local_130);
  juce::String::~String((String *)local_140);
  juce::String::~String(local_128);
  juce::StringRef::StringRef((StringRef *)&local_38,(undefined8 *)local_120);
                    /* try { // try from 0016812a to 00168134 has its CatchHandler @ 00168db6 */
  juce::AudioProcessorValueTreeState::addParameterListener
            ((AudioProcessorValueTreeState *)(lVar1 + 0x158),local_38,(long)(this + 400));
  juce::String::~String(local_120);
  pAVar3 = local_88;
  this_01 = local_100;
                    /* try { // try from 0016813f to 0016815c has its CatchHandler @ 00168dae */
  juce::String::String((String *)local_140,(byte *)"1x/5x");
                    /* try { // try from 0016815d to 0016816b has its CatchHandler @ 00168da1 */
  juce::Button::setTooltip((Button *)local_108,(long *)local_140);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00168176 to 00168186 has its CatchHandler @ 00168d99 */
  juce::String::String((String *)local_140,(byte *)"Keep Bass");
                    /* try { // try from 00168187 to 00168195 has its CatchHandler @ 00168d97 */
  juce::Button::setTooltip((Button *)local_f0,(long *)local_140);
  juce::String::~String((String *)local_140);
                    /* try { // try from 001681a0 to 001681b0 has its CatchHandler @ 00168d8f */
  juce::String::String((String *)local_140,&DAT_005d91d0);
                    /* try { // try from 001681b1 to 001681c2 has its CatchHandler @ 00168d8d */
  juce::ComboBox::addItem((ComboBox *)this_01,(undefined8 *)local_140,1);
  juce::String::~String((String *)local_140);
                    /* try { // try from 001681cd to 001681dd has its CatchHandler @ 00168d85 */
  juce::String::String((String *)local_140,&DAT_005d91d5);
                    /* try { // try from 001681de to 001681ef has its CatchHandler @ 00168d83 */
  juce::ComboBox::addItem((ComboBox *)this_01,(undefined8 *)local_140,3);
  juce::String::~String((String *)local_140);
                    /* try { // try from 001681fa to 0016820a has its CatchHandler @ 00168d7b */
  juce::String::String((String *)local_140,&DAT_005d91da);
                    /* try { // try from 0016820b to 0016821c has its CatchHandler @ 00168d79 */
  juce::ComboBox::addItem((ComboBox *)this_01,(undefined8 *)local_140,5);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00168227 to 00168237 has its CatchHandler @ 00168d71 */
  juce::String::String((String *)local_140,&DAT_005d91df);
                    /* try { // try from 00168238 to 00168249 has its CatchHandler @ 00168d6f */
  juce::ComboBox::addItem((ComboBox *)this_01,(undefined8 *)local_140,7);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00168254 to 00168264 has its CatchHandler @ 00168d67 */
  juce::String::String((String *)local_140,(byte *)"16384");
                    /* try { // try from 00168265 to 00168276 has its CatchHandler @ 00168d65 */
  juce::ComboBox::addItem((ComboBox *)this_01,(undefined8 *)local_140,9);
  juce::String::~String((String *)local_140);
  lVar1 = *(long *)(this + 0x198);
                    /* try { // try from 00168288 to 00168298 has its CatchHandler @ 00168d5d */
  juce::String::String(local_128,(byte *)"Blocksize");
                    /* try { // try from 00168299 to 001682a7 has its CatchHandler @ 00168d50 */
  juce::String::toLowerCase((undefined8 *)local_140,(undefined8 *)local_128);
  juce::StringRef::StringRef((StringRef *)&local_130,&DAT_005e3c3c);
                    /* try { // try from 001682be to 001682cc has its CatchHandler @ 00168d4e */
  juce::String::removeCharacters((undefined8 *)local_120,(undefined8 *)local_140,local_130);
  juce::String::~String((String *)local_140);
  juce::String::~String(local_128);
  juce::StringRef::StringRef((StringRef *)&local_40,(undefined8 *)local_120);
  pfVar5 = (float *)juce::AudioProcessorValueTreeState::getRawParameterValue
                              ((AudioProcessorValueTreeState *)(lVar1 + 0x158),local_40);
  juce::String::~String(local_120);
  if (pfVar5 != (float *)0x0) {
                    /* try { // try from 00168333 to 00168339 has its CatchHandler @ 00168ab2 */
    juce::ComboBox::setSelectedId((ComboBox *)local_100,(int)(DAT_005d9038 + *pfVar5),0);
  }
                    /* try { // try from 0016833a to 0016834a has its CatchHandler @ 00168d46 */
  juce::Identifier::Identifier((Identifier *)&local_130,(byte *)"symmetricEnabled");
  juce::var::var((var *)local_140,(var)0x1);
                    /* try { // try from 00168364 to 00168373 has its CatchHandler @ 00168d2a */
  juce::NamedValueSet::set((NamedValueSet *)(this + 0x708),(long *)&local_130,(long *)local_140);
  juce::var::~var((var *)local_140);
  juce::Identifier::~Identifier((Identifier *)&local_130);
  pLVar6 = local_110;
  this_03 = local_118;
                    /* try { // try from 00168388 to 0016842d has its CatchHandler @ 00168fae */
  uVar9 = juce::Component::setSize((Component *)this,0x1a9,0x21c);
  uVar9 = juce::AudioProcessorEditor::setResizable
                    (uVar9,param_2,param_3,(AudioProcessorEditor *)this,(AudioProcessorEditor)0x1,
                     '\x01');
  puVar7 = (uint *)0x438;
  juce::AudioProcessorEditor::setResizeLimits
            (uVar9,param_2,param_3,(AudioProcessorEditor *)this,0x1a9,0x21c,0x352,0x438);
  juce::ComponentBoundsConstrainer::setFixedAspectRatio
            (DAT_005d9090,*(ComponentBoundsConstrainer **)(this + 0x140));
  juce::Timer::startTimerHz(local_90,0x5a);
  juce::Component::addAndMakeVisible((Component *)this,this_00,0xffffffff);
  juce::Component::setPaintingIsUnclipped(this_00,1);
  juce::Component::setLookAndFeel((Component *)local_b8,*(long *)local_c8);
                    /* try { // try from 0016842e to 0016848d has its CatchHandler @ 00168fd9 */
  juce::Component::addAndMakeVisible(this_00,(Component *)pAVar3,0xffffffff);
  juce::Component::addAndMakeVisible(this_00,(Component *)(this + 0x3f0),0xffffffff);
  juce::Component::addAndMakeVisible(this_00,(Component *)(this + 0x640),0xffffffff);
  juce::Component::addAndMakeVisible(this_00,(Component *)(this + 0x890),0xffffffff);
  juce::Component::addAndMakeVisible(this_00,(Component *)(this + 0xae0),0xffffffff);
                    /* try { // try from 0016848e to 0016849d has its CatchHandler @ 00168d22 */
  juce::Component::addAndMakeVisible(this_00,(Component *)this_03,0xffffffff);
                    /* try { // try from 0016849e to 001684b2 has its CatchHandler @ 00168d1a */
  juce::Component::addAndMakeVisible(this_00,(Component *)local_98,0xffffffff);
                    /* try { // try from 001684b3 to 001684d6 has its CatchHandler @ 00168fa6 */
  juce::Component::addAndMakeVisible(this_00,(Component *)local_108,0xffffffff);
  juce::Component::addAndMakeVisible(this_00,(Component *)local_f0,0xffffffff);
                    /* try { // try from 001684d7 to 001684e8 has its CatchHandler @ 00168d12 */
  juce::Component::addAndMakeVisible(this_00,(Component *)local_100,0xffffffff);
                    /* try { // try from 001684e9 to 001684f9 has its CatchHandler @ 00168d0a */
  juce::String::String((String *)&local_130,&DAT_005d91fb);
                    /* try { // try from 001684fa to 00168508 has its CatchHandler @ 00168d02 */
  juce::Label::setText(pLVar6,(long *)&local_130,0);
  if (FontManager::getInstance()::instance == '\0') {
    iVar4 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar4 != 0) {
                    /* try { // try from 00168953 to 0016895e has its CatchHandler @ 00168aa1 */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
      pLVar6 = local_110;
      this_03 = local_118;
    }
  }
                    /* try { // try from 00168517 to 00168527 has its CatchHandler @ 00168cfa */
  juce::Font::Font((Font *)local_140,(long *)(FontManager::getInstance()::instance + 8));
                    /* try { // try from 00168528 to 0016853e has its CatchHandler @ 00168ced */
  juce::Font::withHeight(DAT_005d903c,(Font *)local_128,(long *)local_140);
  juce::Font::~Font((Font *)local_140);
                    /* try { // try from 00168549 to 00168555 has its CatchHandler @ 00168ce5 */
  juce::Label::setFont(pLVar6,(long *)local_128);
  juce::Font::~Font((Font *)local_128);
  if (FontManager::getInstance()::instance == '\0') {
    iVar4 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar4 != 0) {
                    /* try { // try from 001689a8 to 001689b3 has its CatchHandler @ 00168a9f */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
      pLVar6 = local_110;
      this_03 = local_118;
    }
  }
                    /* try { // try from 0016856e to 0016857e has its CatchHandler @ 00168cdd */
  juce::Font::Font((Font *)local_140,(long *)(FontManager::getInstance()::instance + 8));
                    /* try { // try from 0016857f to 00168595 has its CatchHandler @ 00168cdb */
  juce::Font::withHeight(DAT_005d903c,(Font *)local_128,(long *)local_140);
  juce::Font::~Font((Font *)local_140);
  this_02 = local_a0;
                    /* try { // try from 001685a0 to 001685bf has its CatchHandler @ 00168cd3 */
  fVar10 = 0.0;
  juce::GlyphArrangement::addLineOfText
            (0.0,0.0,local_a0,(undefined8 *)local_128,(ulong *)&local_130);
  juce::Font::~Font((Font *)local_128);
                    /* try { // try from 001685ca to 001685dd has its CatchHandler @ 00168ccb */
  juce::GlyphArrangement::getBoundingBox(this_02,0,0xffffffff,1,puVar7,uVar8);
                    /* try { // try from 001685e2 to 00168609 has its CatchHandler @ 00168f9e */
  juce::Component::setBounds((Component *)pLVar6,5,10,(int)fVar10,0x28);
  juce::Component::addAndMakeVisible(this_00,(Component *)pLVar6,0xffffffff);
  if (FontManager::getInstance()::instance == '\0') {
    iVar4 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar4 != 0) {
                    /* try { // try from 001689fd to 00168a08 has its CatchHandler @ 00168a9d */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
      this_03 = local_118;
    }
  }
                    /* try { // try from 00168618 to 00168628 has its CatchHandler @ 00168cc3 */
  juce::Font::Font((Font *)local_140,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 00168629 to 0016863f has its CatchHandler @ 00168cc1 */
  juce::Font::withHeight(DAT_005d9040,(Font *)local_128,(long *)local_140);
  juce::Font::~Font((Font *)local_140);
                    /* try { // try from 0016864a to 0016865a has its CatchHandler @ 00168cb9 */
  juce::String::String((String *)local_140,&DAT_005d91ff);
                    /* try { // try from 0016865b to 0016867f has its CatchHandler @ 00168b10 */
  setupLabel(local_a8,(long *)local_128,(String *)local_140,0xbc,0x1f8,this_00);
  juce::String::~String((String *)local_140);
                    /* try { // try from 0016868a to 0016869a has its CatchHandler @ 00168b0b */
  juce::String::String((String *)local_140,(byte *)"Blur ");
                    /* try { // try from 0016869b to 001686bf has its CatchHandler @ 00168b09 */
  setupLabel(local_b0,(long *)local_128,(String *)local_140,0x13b,0x1f8,this_00);
  juce::String::~String((String *)local_140);
                    /* try { // try from 001686ca to 001686da has its CatchHandler @ 00168b04 */
  juce::String::String((String *)local_140,(byte *)"Width ");
                    /* try { // try from 001686db to 001686ff has its CatchHandler @ 00168b02 */
  setupLabel(local_c0,(long *)local_128,(String *)local_140,0x2a,0x167,this_00);
  juce::String::~String((String *)local_140);
                    /* try { // try from 0016870a to 0016871a has its CatchHandler @ 00168afd */
  juce::String::String((String *)local_140,(byte *)"Depth ");
                    /* try { // try from 0016871b to 0016873c has its CatchHandler @ 00168afb */
  setupLabel(local_d0,(long *)local_128,(String *)local_140,0x135,0x167,this_00);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00168747 to 00168757 has its CatchHandler @ 00168af6 */
  juce::String::String((String *)local_140,(byte *)"Speed ");
                    /* try { // try from 00168758 to 00168779 has its CatchHandler @ 00168af4 */
  setupLabel(local_d8,(long *)local_128,(String *)local_140,0x29,0x1f8,this_00);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00168784 to 00168794 has its CatchHandler @ 00168aef */
  juce::String::String((String *)local_140,(byte *)"Offset ");
                    /* try { // try from 00168795 to 001687b6 has its CatchHandler @ 00168aed */
  setupLabel(local_e0,(long *)local_128,(String *)local_140,0xaa,0x176,this_00);
  juce::String::~String((String *)local_140);
  this[0x370] = (AudioPluginAudioProcessorEditor)0x0;
  this[0x5c0] = (AudioPluginAudioProcessorEditor)0x0;
  this[0xa60] = (AudioPluginAudioProcessorEditor)0x0;
  this[0xcb0] = (AudioPluginAudioProcessorEditor)0x0;
  this[0xf00] = (AudioPluginAudioProcessorEditor)0x0;
                    /* try { // try from 001687e9 to 001687f5 has its CatchHandler @ 00168ae8 */
  juce::CustomDial::setInfinite((CustomDial *)this_03,(var)0x1);
  pLVar6 = local_f8;
  if (FontManager::getInstance()::instance == '\0') {
    iVar4 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar4 != 0) {
                    /* try { // try from 00168a4d to 00168a58 has its CatchHandler @ 00168a89 */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
      pLVar6 = local_f8;
    }
  }
                    /* try { // try from 00168809 to 00168819 has its CatchHandler @ 00168ae3 */
  juce::Font::Font((Font *)local_140,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 0016881a to 00168830 has its CatchHandler @ 00168ad4 */
  juce::Font::withHeight(DAT_005d9040,(Font *)local_120,(long *)local_140);
  juce::Font::~Font((Font *)local_140);
                    /* try { // try from 0016883b to 0016884b has its CatchHandler @ 00168aca */
  juce::String::String((String *)local_140,&DAT_005d9227);
                    /* try { // try from 0016884c to 0016886d has its CatchHandler @ 00168abb */
  setupLabel(local_e8,(long *)local_120,(String *)local_140,0x13,0xcb,this_00);
  juce::String::~String((String *)local_140);
                    /* try { // try from 00168878 to 00168888 has its CatchHandler @ 00168ab9 */
  juce::String::String((String *)local_140,&DAT_005d922b);
                    /* try { // try from 00168889 to 001688a8 has its CatchHandler @ 00168ab7 */
  setupLabel(pLVar6,(long *)local_120,(String *)local_140,0x171,0xcb,this_00);
  juce::String::~String((String *)local_140);
  juce::Font::~Font((Font *)local_120);
  juce::Font::~Font((Font *)local_128);
  juce::String::~String((String *)&local_130);
  return;
}


