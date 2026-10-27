// Function : ~AudioPluginAudioProcessorEditor
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 001691c0
// Prototype: undefined ~AudioPluginAudioProcessorEditor(AudioPluginAudioProcessorEditor * this)
// Body     : 001691c0 - 00169773


/* AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() */

void __thiscall
AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor
          (AudioPluginAudioProcessorEditor *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar3;
  long lVar4;
  long lVar5;
  String local_40 [8];
  String local_38 [8];
  String local_30 [8];
  byte *local_28;
  byte *local_20;
  
  lVar4 = *(long *)(this + 0x198);
                    /* try { // try from 001691d3 to 001691e3 has its CatchHandler @ 0016979c */
  juce::String::String(local_38,(byte *)"1x/5x");
                    /* try { // try from 001691e4 to 001691f2 has its CatchHandler @ 0016978d */
  juce::String::toLowerCase((undefined8 *)local_30,(undefined8 *)local_38);
  juce::StringRef::StringRef((StringRef *)&local_20,&DAT_005e3c3c);
                    /* try { // try from 00169209 to 00169217 has its CatchHandler @ 0016977e */
  juce::String::removeCharacters((undefined8 *)local_40,(undefined8 *)local_30,local_20);
  juce::String::~String(local_30);
  juce::String::~String(local_38);
  juce::StringRef::StringRef((StringRef *)&local_28,(undefined8 *)local_40);
                    /* try { // try from 0016924e to 00169255 has its CatchHandler @ 00169774 */
  juce::AudioProcessorValueTreeState::removeParameterListener
            ((AudioProcessorValueTreeState *)(lVar4 + 0x158),local_28,(long)(this + 400));
  juce::String::~String(local_40);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x3020);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      juce::TooltipWindow::~TooltipWindow((TooltipWindow *)(this + 0x2ec8));
      iVar2 = *(int *)(this + 0x2ec4);
      goto joined_r0x00169769;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = this_00 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      juce::TooltipWindow::~TooltipWindow((TooltipWindow *)(this + 0x2ec8));
      iVar2 = *(int *)(this + 0x2ec4);
      goto joined_r0x00169769;
    }
  }
  juce::TooltipWindow::~TooltipWindow((TooltipWindow *)(this + 0x2ec8));
  iVar2 = *(int *)(this + 0x2ec4);
joined_r0x00169769:
  if (0 < iVar2) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2eb8) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2ec4));
  }
  *(undefined4 *)(this + 0x2ec4) = 0;
  free(*(void **)(this + 0x2eb8));
  if (0 < *(int *)(this + 0x2eb4)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2ea8) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2eb4));
  }
  *(undefined4 *)(this + 0x2eb4) = 0;
  free(*(void **)(this + 0x2ea8));
  juce::Label::~Label((Label *)(this + 0x2c90));
  juce::Label::~Label((Label *)(this + 0x2a78));
  if (0 < *(int *)(this + 0x2a74)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2a68) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2a74));
  }
  *(undefined4 *)(this + 0x2a74) = 0;
  free(*(void **)(this + 0x2a68));
  if (0 < *(int *)(this + 0x2a64)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2a58) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2a64));
  }
  *(undefined4 *)(this + 0x2a64) = 0;
  free(*(void **)(this + 0x2a58));
  if (0 < *(int *)(this + 0x2a54)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2a48) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2a54));
  }
  *(undefined4 *)(this + 0x2a54) = 0;
  free(*(void **)(this + 0x2a48));
  if (0 < *(int *)(this + 0x2a44)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2a38) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2a44));
  }
  *(undefined4 *)(this + 0x2a44) = 0;
  free(*(void **)(this + 0x2a38));
  if (0 < *(int *)(this + 0x2a34)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2a28) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2a34));
  }
  *(undefined4 *)(this + 0x2a34) = 0;
  free(*(void **)(this + 0x2a28));
  if (0 < *(int *)(this + 0x2a24)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x2a18) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x2a24));
  }
  *(undefined4 *)(this + 0x2a24) = 0;
  free(*(void **)(this + 0x2a18));
  juce::Label::~Label((Label *)(this + 0x2800));
  juce::Label::~Label((Label *)(this + 0x25e8));
  juce::Label::~Label((Label *)(this + 0x23d0));
  juce::Label::~Label((Label *)(this + 0x21b8));
  juce::Label::~Label((Label *)(this + 0x1fa0));
  juce::Label::~Label((Label *)(this + 0x1d88));
  if (0 < *(int *)(this + 0x1d84)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      juce::Font::~Font((Font *)(*(long *)(this + 0x1d78) + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < *(int *)(this + 0x1d84));
  }
  *(undefined4 *)(this + 0x1d84) = 0;
  free(*(void **)(this + 0x1d78));
  juce::Label::~Label((Label *)(this + 0x1b60));
  juce::Component::~Component((Component *)(this + 0x1a70));
  if (*(void **)(this + 0x1a58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1a58));
  }
  plVar3 = *(long **)(this + 0x1a50);
  if (plVar3 != (long *)0x0) {
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
    operator_delete(plVar3);
  }
  *(undefined8 *)(this + 0x1a50) = 0;
  plVar3 = *(long **)(this + 0x1a48);
  if (plVar3 != (long *)0x0) {
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
    operator_delete(plVar3);
  }
  *(undefined8 *)(this + 0x1a48) = 0;
  AttachedAnimatedButton::~AttachedAnimatedButton((AttachedAnimatedButton *)(this + 0x1730));
  AttachedAnimatedButton::~AttachedAnimatedButton((AttachedAnimatedButton *)(this + 0x1418));
  AttachedComboBox::~AttachedComboBox((AttachedComboBox *)(this + 0x11b0));
  AttachedSlider::~AttachedSlider((AttachedSlider *)(this + 0xf80));
  AttachedInfiniteDial::~AttachedInfiniteDial((AttachedInfiniteDial *)(this + 0xd30));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0xae0));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x890));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x640));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x3f0));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x1a0));
  juce::Timer::~Timer((Timer *)(this + 0x168));
  juce::AudioProcessorEditor::~AudioProcessorEditor((AudioProcessorEditor *)this);
  return;
}


