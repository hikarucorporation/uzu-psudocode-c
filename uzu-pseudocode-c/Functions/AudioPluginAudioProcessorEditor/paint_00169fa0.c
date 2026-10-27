// Function : paint
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 00169fa0
// Prototype: undefined paint(AudioPluginAudioProcessorEditor * this, Graphics * param_1)
// Body     : 00169fa0 - 0016a29d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioPluginAudioProcessorEditor::paint(juce::Graphics&) */

void __thiscall
AudioPluginAudioProcessorEditor::paint(AudioPluginAudioProcessorEditor *this,Graphics *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  Font local_48 [8];
  uint local_40 [2];
  Font local_38 [24];
  
  juce::Component::getTransform((undefined8 *)local_38,(long)(this + 0x1a70));
  juce::Graphics::addTransform(param_1,local_38);
  juce::Colour::Colour(0.0,0.0,DAT_005d905c,DAT_005d9038,(Colour *)local_40);
  juce::Graphics::fillAll(param_1,local_40[0]);
  if (FontManager::getInstance()::instance == '\0') {
    iVar3 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar3 != 0) {
                    /* try { // try from 0016a267 to 0016a272 has its CatchHandler @ 0016a29e */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  juce::Font::Font(local_38,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 0016a01e to 0016a032 has its CatchHandler @ 0016a2ca */
  juce::Font::withHeight(DAT_005d9040,local_48,(long *)local_38);
  juce::Font::~Font(local_38);
                    /* try { // try from 0016a03d to 0016a049 has its CatchHandler @ 0016a2b5 */
  juce::Graphics::setFont(param_1,local_48);
  juce::Font::~Font(local_48);
  juce::Colour::Colour(0.0,0.0,0.0,DAT_005d9044,(Colour *)local_50);
  juce::Graphics::setColour(param_1,local_50[0]);
  juce::Graphics::fillRect
            (0,(float)*(int *)(this + 0x44) + _DAT_005d9060,VERSION_LABEL_WIDTH,DAT_005d9064,param_1
            );
  juce::Colour::Colour(0.0,0.0,DAT_005d905c,DAT_005d9038,(Colour *)local_58);
  juce::Graphics::setColour(param_1,local_58[0]);
  juce::Graphics::fillRect(0,_DAT_005d90f0,(long)param_1);
  juce::Graphics::fillRect(_DAT_005d9100,_DAT_005d9110,(long)param_1);
  juce::Colour::Colour(0.0,0.0,DAT_005d9068,DAT_005d9038,(Colour *)local_60);
  juce::Graphics::setColour(param_1,local_60[0]);
  juce::Graphics::fillRect(_DAT_005d9120,_DAT_005d9130,(long)param_1);
  juce::Graphics::fillRoundedRectangle(_DAT_005d9140,_DAT_005d9150,DAT_005d906c,(long)param_1);
  juce::Colour::Colour(0.0,0.0,DAT_005d9070,DAT_005d9038,(Colour *)local_68);
  juce::Graphics::setColour(param_1,local_68[0]);
  juce::Graphics::fillRoundedRectangle(_DAT_005d9160,_DAT_005d9170,DAT_005d9074,(long)param_1);
  juce::Graphics::fillRect(_DAT_005d9180,_DAT_005d9190,(long)param_1);
  puVar4 = *(undefined4 **)(this + 0x1a58);
  puVar2 = *(undefined4 **)(this + 0x1a60);
  if (puVar4 != puVar2) {
    do {
      fVar1 = (float)puVar4[2];
      fVar5 = DAT_005d9038;
      if (fVar1 <= DAT_005d9038) {
        fVar5 = fVar1;
      }
      juce::Colour::Colour
                (0.0,0.0,DAT_005d9038,(float)(~-(uint)(fVar1 < DAT_005d9058) & (uint)fVar5),
                 (Colour *)local_70);
      juce::Graphics::setColour(param_1,local_70[0]);
      juce::Graphics::fillRoundedRectangle
                (*puVar4,puVar4[1],DAT_005d9078,DAT_005d9078,DAT_005d9068,param_1);
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar2);
  }
  return;
}


