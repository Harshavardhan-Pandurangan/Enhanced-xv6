#ifndef SCHEDULER

void scheduleRR(struct cpu *c, struct proc *proc);
void scheduleFCFS(struct cpu *c, struct proc *proc);
void schedulePBS(struct cpu *c, struct proc *proc);

#endif