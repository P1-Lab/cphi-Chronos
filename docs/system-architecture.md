<div class="system-architecture">
  <h2>System Architecture &amp; Constraints</h2>

  <section class="power-domain-isolation">
    <h3>1. Power Domain Isolation</h3>
    <p>The system uses a dual-rail architecture:</p>
    <ul>
      <li><strong>Mechanical:</strong> Powered by mainspring; independent of electronics.</li>
      <li><strong>Electronic:</strong> Powered by CR2032; includes MCU, RTC, and E-Ink.</li>
    </ul>
  </section>

  <section class="data-flow">
    <h3>2. Data Flow</h3>
    <ol>
      <li>RTC provides absolute time (Unix epoch, UTC).</li>
      <li>MCU computes tidal height using harmonic model.</li>
      <li>Output rendered to E-Ink display.</li>
    </ol>
  </section>
</div>
