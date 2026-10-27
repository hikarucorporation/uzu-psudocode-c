// Function : ~PdWorker
// Namespace: PdWorker
// Entry    : 00167350
// Prototype: undefined ~PdWorker(PdWorker * this)
// Body     : 00167350 - 001673aa


/* PdWorker::~PdWorker() */

void __thiscall PdWorker::~PdWorker(PdWorker *this)

{
  *(undefined ***)this = &PTR__PdWorker_00700db0;
                    /* try { // try from 00167361 to 0016737e has its CatchHandler @ 001673ab */
  juce::Thread::signalThreadShouldExit((Thread *)this);
  juce::WaitableEvent::signal((WaitableEvent *)(this + 0x198));
  juce::Thread::stopThread((Thread *)this,2000);
  if (*(void **)(this + 0x228) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x228));
  }
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x1c8));
  juce::Thread::~Thread((Thread *)this);
  return;
}


