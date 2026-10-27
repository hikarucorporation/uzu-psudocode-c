// Function : PdWorker
// Namespace: PdWorker
// Entry    : 001672c0
// Prototype: undefined PdWorker(PdWorker * this)
// Body     : 001672c0 - 00167333


/* PdWorker::PdWorker() */

void __thiscall PdWorker::PdWorker(PdWorker *this)

{
  String aSStack_18 [8];
  
  juce::String::String(aSStack_18,(byte *)0x5d9008);
                    /* try { // try from 001672d9 to 001672e5 has its CatchHandler @ 00167334 */
  juce::Thread::Thread((Thread *)this,(long *)aSStack_18,0);
  juce::String::~String(aSStack_18);
  *(undefined ***)this = &PTR__PdWorker_00700db0;
  juce::WaitableEvent::WaitableEvent((WaitableEvent *)(this + 0x198),(WaitableEvent)0x0);
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  this[0x240] = (PdWorker)0x0;
  return;
}


