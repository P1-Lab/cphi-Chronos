<div class="validation-accuracy">
  <h2>Validation &amp; Empirical Accuracy</h2>

  <section class="tidal-model-integrity">
    <h3>1. Tidal Model Integrity</h3>
    <p>
      The cphi-Chronos uses a 5-constituent harmonic model. Users can run
      <code>compare_noaa.py</code> to validate local accuracy against NOAA datum.
    </p>

    <h4>Expected Results:</h4>
    <ul>
      <li>Model tracks NOAA phase closely.</li>
      <li>
        Reduced harmonic complexity results in a smoother waveform compared to reference data.
      </li>
    </ul>
  </section>

  <section class="power-consumption">
    <h3>2. Power Consumption</h3>
    <ul>
      <li>Estimated average draw: <strong>0.04 mA</strong></li>
      <li>Theoretical lifespan: ≈ <strong>300 days</strong> on a 220 mAh CR2032</li>
    </ul>

    <h4>Optimization Path:</h4>
    <p>Increasing refresh interval to 30 minutes.</p>
  </section>
</div>
