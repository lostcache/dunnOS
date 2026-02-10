# Product Guidelines

## 1. Tone & Style
-   **Technical & Precise:** Documentation and system messages must be accurate, focusing on low-level details with formal language suitable for systems programming.
-   **Minimalist & Zen:** Prioritize clarity and brevity. Avoid distractions and unnecessary conversational filler. The interface should feel efficient and tool-like.

## 2. Design Principles
-   **Secure by Default:** All features, ports, and capabilities are locked down by default. Modules must explicitly declare their required permissions in a manifest.
-   **Explicit over Implicit:** Avoid "magic" behavior. Commands should be verbose enough to be unambiguous. Required parameters must be provided explicitly rather than relying on hidden defaults.
-   **Unix Philosophy:** Build composable tools that do one thing well. Prefer text streams for inter-process communication and configuration to ensure interoperability.

## 3. Error Handling & Debugging
-   **Fail Fast & Loud:** Invariants must be strictly enforced. If an invariant is violated, the component should crash immediately to prevent undefined state propagation.
-   **Detailed Diagnostics:** While the failure is immediate, the system must produce verbose logs, error codes, and stack traces to aid rapid debugging.
-   **Self-Healing:** The supervisor (kernel) must detect crashed components (unikernels) and automatically attempt to respawn them to restore service availability, logging the incident for later analysis.

## 4. Conceptual Representation
-   **Abstract Nodes:** While the "Hive" metaphor guides the high-level architecture, the implementation and technical documentation should stick to strictly technical terminology (e.g., "Microkernel," "Unikernel," "IPC," "Process") to ensure clarity and avoid confusion. Avoid overusing biological terms in the API or code.
