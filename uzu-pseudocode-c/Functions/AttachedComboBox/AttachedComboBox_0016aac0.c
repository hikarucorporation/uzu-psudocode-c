// Function : AttachedComboBox
// Namespace: AttachedComboBox
// Entry    : 0016aac0
// Prototype: undefined AttachedComboBox(AttachedComboBox * this, long param_1, int param_2)
// Body     : 0016aac0 - 0016ad31


/* AttachedComboBox::AttachedComboBox(AudioPluginAudioProcessor&, param::PID) */

void __thiscall AttachedComboBox::AttachedComboBox(AttachedComboBox *this,long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  void *local_48;
  int local_3c;
  ComboBoxParameterAttachment *local_38;
  
  juce::CustomComboBox::CustomComboBox((CustomComboBox *)this);
  local_38 = (ComboBoxParameterAttachment *)(this + 0x1e8);
                    /* try { // try from 0016aaf1 to 0016aaff has its CatchHandler @ 0016ad52 */
  juce::ComboBoxParameterAttachment::ComboBoxParameterAttachment
            (local_38,*(AudioProcessorParameter **)(*(long *)(param_1 + 0x238) + (long)param_2 * 8),
             this,0);
  if (juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak == '\0') {
    iVar3 = __cxa_guard_acquire(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    if (iVar3 != 0) {
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._0_4_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._8_8_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._16_8_ = 0;
      __cxa_atexit(juce::SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak,
                   juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    }
  }
                    /* try { // try from 0016ab15 to 0016ab23 has its CatchHandler @ 0016ad4d */
  juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 600),
             (SpinLock *)juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
                    /* try { // try from 0016ab2b to 0016ab32 has its CatchHandler @ 0016ad4b */
  juce::Component::setLookAndFeel((Component *)this,*(long *)(this + 600));
  plVar1 = *(long **)(*(long *)(param_1 + 0x238) + (long)param_2 * 8);
  if (plVar1 != (long *)0x0) {
    lVar4 = __dynamic_cast(plVar1,&juce::RangedAudioParameter::typeinfo,
                           &juce::AudioParameterChoice::typeinfo);
    if (lVar4 != 0) {
                    /* try { // try from 0016ab64 to 0016ab6f has its CatchHandler @ 0016ad38 */
      uVar7 = 0;
      juce::ComboBox::clear((ComboBox *)this,0);
      while ((int)uVar7 < *(int *)(lVar4 + 0x8c)) {
        puVar5 = juce::StringArray::operator[]((StringArray *)(lVar4 + 0x80),uVar7);
        uVar7 = uVar7 + 1;
                    /* try { // try from 0016ab96 to 0016aba2 has its CatchHandler @ 0016ad64 */
        juce::ComboBox::addItem((ComboBox *)this,puVar5,uVar7);
      }
                    /* try { // try from 0016ac0e to 0016ac17 has its CatchHandler @ 0016ad38 */
      juce::ComboBox::setSelectedItemIndex
                ((ComboBox *)this,SUB84((double)*(float *)(lVar4 + 0x108) + DAT_005d9098,0),0);
      goto LAB_0016ac9f;
    }
  }
                    /* try { // try from 0016aba9 to 0016abb4 has its CatchHandler @ 0016ad34 */
  (**(code **)(*plVar1 + 0x88))(&local_48);
  if (local_3c != 0) {
                    /* try { // try from 0016abc0 to 0016abcb has its CatchHandler @ 0016ad32 */
    uVar7 = 0;
    juce::ComboBox::clear((ComboBox *)this,0);
    while (iVar3 = local_3c, (int)uVar7 < local_3c) {
      puVar5 = juce::StringArray::operator[]((StringArray *)&local_48,uVar7);
      uVar7 = uVar7 + 1;
                    /* try { // try from 0016abe5 to 0016abf1 has its CatchHandler @ 0016ad57 */
      juce::ComboBox::addItem((ComboBox *)this,puVar5,uVar7);
    }
                    /* try { // try from 0016ac21 to 0016ac26 has its CatchHandler @ 0016ad36 */
    fVar9 = (float)(**(code **)(*plVar1 + 0x10))(plVar1);
    fVar9 = roundf(fVar9 * (float)(local_3c + -1));
    iVar2 = (int)fVar9;
    iVar6 = iVar3 + -1;
    if (iVar2 <= iVar3 + -1) {
      iVar6 = iVar2;
    }
    if (iVar2 < 0) {
      iVar6 = 0;
    }
                    /* try { // try from 0016ac4e to 0016ac59 has its CatchHandler @ 0016ad36 */
    juce::ComboBox::setSelectedItemIndex((ComboBox *)this,iVar6,0);
    if (0 < local_3c) {
      lVar4 = 0;
      lVar8 = 0;
      do {
        juce::String::~String((String *)((long)local_48 + lVar4));
        lVar8 = lVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar8 < local_3c);
    }
  }
  local_3c = 0;
  free(local_48);
LAB_0016ac9f:
                    /* try { // try from 0016ac9f to 0016acad has its CatchHandler @ 0016ad49 */
  juce::String::String((String *)&local_48,(byte *)"Select...");
                    /* try { // try from 0016acae to 0016acb8 has its CatchHandler @ 0016ad3c */
  juce::ComboBox::setTextWhenNothingSelected((ComboBox *)this,(long *)&local_48);
  juce::String::~String((String *)&local_48);
                    /* try { // try from 0016acc1 to 0016accd has its CatchHandler @ 0016ad3a */
  juce::ComboBox::setJustificationType((ComboBox *)this,0x21);
  return;
}


