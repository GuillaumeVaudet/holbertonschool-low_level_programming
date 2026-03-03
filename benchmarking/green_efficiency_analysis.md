# Green efficiency report

## Measurement Methodology

To build this report we used the clock() function include in the time library in several files.
This function need a starting point with ending point. It's counting in 'ticks' correspond to 'CPU timer' and if we want this result in human time we  had to convert it in second with

```bash
(end - start) / CLOCKS_PER_SEC
```

## Observed Performance Differences

The compiled program must always be run in the same environment, i.e., on the same machine with the same background processes, if possible, otherwise the results obtained will be distorted.
For example we could see that output from task 1 based on the same compiled program:

```bash
Iterations: 100000000
Execution time: 0.394647 seconds

Iterations: 100000000
Execution time: 0.380288 seconds

Iterations: 100000000
Execution time: 0.371183 seconds
```

All launch are in the same environment on the same computer. We can see little differences between results but it's not impactful.

## Relation Between Runtime and Energy Consumption

The longer a program runs, the more CPU cycles it consumes, and therefore the more energy it uses.
This is directly visible in our measurements: the naive algorithm took an average of 3.608672 seconds while the single-pass algorithm took only 0.000138 seconds to produce the same result — approximately 26 150 times faster.
Since clock() measures CPU cycles consumed, a longer runtime directly implies higher energy consumption for an equivalent computation.

## Limitations of the Experiment

Several limitations must be considered when interpreting these results.

First, `clock()` measures CPU time, not real elapsed time. If the OS scheduler
gives the CPU to another process during execution, that time is not counted,
which can introduce variability between runs.

Second, the environment is not fully controlled. Background processes and open
applications consume CPU resources and can distort measurements, even on the
same machine.

Third, three runs is a statistically small sample. In serious benchmarking,
dozens or hundreds of runs are required to obtain a reliable average.

Fourth, all measurements were taken on a single machine. Results would differ
on hardware with a different CPU, memory speed, or OS configuration.

Finally, energy consumption is not measured directly. We deduce it from CPU
time, but we do not measure actual watts consumed. This remains an
approximation.

## Practical Engineering Takeaway

In an era of AI workloads and rapid software delivery, algorithmic choices have
a direct and measurable impact on both performance and energy consumption. Our
measurements demonstrate this concretely: the naive algorithm consumed
approximately 26 150 times more CPU cycles than the optimized single-pass
implementation to produce the exact same result. At scale, running an
inefficient algorithm millions of times per day translates into significant
energy waste and increased infrastructure costs.

Choosing the right algorithm is therefore not only a performance decision but
also an engineering responsibility. As computation becomes a larger share of
global energy consumption, writing efficient code is a practical contribution
to reducing that footprint. The Apollo missions succeeded in part because
engineers had no margin for waste — every byte and every cycle counted.
Modern software development deserves the same rigor.
