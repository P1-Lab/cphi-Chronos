# cphi-Chronos
The cphi-Chronos is a self-contained, air-gapped wrist instrument for lunar and tidal prediction. It bridges mechanical engineering and low-power digital computation to serve as a deterministic "Reference-Grade Instrument". No GPS or network required.<P>
<div style="font-family: sans-serif; max-width: 600px; margin: 20px 0;">
  <table style="width: 100%; border-collapse: collapse; text-align: left;">
    <thead>
      <tr style="border-bottom: 2px solid #333;">
        <th style="padding: 10px; color: #666; font-size: 0.85rem; text-transform: uppercase;">Subsystem</th>
        <th style="padding: 10px; color: #666; font-size: 0.85rem; text-transform: uppercase;">Status</th>
      </tr>
    </thead>
    <tbody style="font-size: 0.95rem;">
      <tr style="border-bottom: 1px solid #eee;">
        <td style="padding: 12px 10px; font-weight: bold;">Mechanical Core</td>
        <td style="padding: 12px 10px; color: #d97706;">Specification Defined / Seeking CAD</td>
      </tr>
      <tr style="border-bottom: 1px solid #eee;">
        <td style="padding: 12px 10px; font-weight: bold;">Tide Engine</td>
        <td style="padding: 12px 10px; color: #059669;">Functional (C++)</td>
      </tr>
      <tr style="border-bottom: 1px solid #eee;">
        <td style="padding: 12px 10px; font-weight: bold;">Logic Board</td>
        <td style="padding: 12px 10px; color: #d97706;">Schematic Draft / Seeking PCB Layout</td>
      </tr>
      <tr>
        <td style="padding: 12px 10px; font-weight: bold;">Case Design</td>
        <td style="padding: 12px 10px; color: #6b7280;">Conceptual (Dimensions Set)</td>
      </tr>
    </tbody>
  </table>
</div>

<div>
  <h1>cphi-Chronos: Model 001</h1>
  <p><strong>A hybrid mechanical-electronic wrist instrument for lunar phase and tidal prediction.</strong></p>

  <p>
    The cphi-Chronos is a fully self-contained system. It operates without GPS, network access, or external services.
    All calculations are performed locally using deterministic physical and mathematical models.
  </p>

  <h2>System Overview</h2>

  <h3>Mechanical Layer</h3>
  <ul>
    <li><strong>Movement:</strong> Seiko NH35 automatic movement</li>
    <li><strong>Complication:</strong> Custom 135-tooth gear train</li>
    <li><strong>Cycle:</strong> Tracks the lunar synodic cycle (29.53059 days)</li>
    <li><strong>Autonomy:</strong> Operates without electricity</li>
  </ul>

  <h3>Electronic Layer</h3>
  <ul>
    <li><strong>MCU:</strong> ESP32-C3 (or ATTiny alternative)</li>
    <li><strong>Display:</strong> 1.02" SPI E-Ink (GDEW0102I6F)</li>
    <li><strong>RTC:</strong> DS3231 (±2 ppm, temperature compensated)</li>
    <li><strong>Power:</strong> CR2032 coin cell</li>
    <li><strong>Function:</strong> Local tidal prediction and visualization</li>
  </ul>

  <h2>System Architecture</h2>
  <pre>
[ NH35 Movement ] --> [ Gear Train ] --> [ Moon Disc ]

[ CR2032 ] --> [ MCU ] <--> [ RTC ] --> [ E-Ink Display ]
  </pre>

  <ul>
    <li>Mechanical and electronic systems are fully decoupled</li>
    <li>Timekeeping remains functional without power</li>
    <li>Tidal logic depends only on RTC and stored constants</li>
  </ul>

  <h2>Technical Specifications</h2>
  <ul>
    <li><strong>Case:</strong> Grade 2 Titanium (CNC)</li>
    <li><strong>Crystal:</strong> Domed sapphire, AR-coated</li>
    <li><strong>Diameter:</strong> 42 mm</li>
    <li><strong>Thickness:</strong> 12 mm</li>
    <li><strong>Water Resistance:</strong> Target 50 m (requires gasket validation)</li>
    <li><strong>Interface:</strong> Mechanical crown + Internal USB-C header</li>
  </ul>

  <h2>Power & Battery Life</h2>
  <p><strong>Refresh interval:</strong> Every 10 minutes</p>
  <p><strong>Current implementation:</strong> ~9–12 months on a single CR2032</p>
  <p><strong>Target:</strong> 18+ months (optimized firmware)</p>

  <table>
    <tr>
      <th>Component</th>
      <th>Active</th>
      <th>Sleep</th>
    </tr>
    <tr>
      <td>MCU</td>
      <td>~15 mA</td>
      <td>~10 uA</td>
    </tr>
    <tr>
      <td>E-Ink</td>
      <td>~20 mA (refresh)</td>
      <td>0</td>
    </tr>
    <tr>
      <td>RTC</td>
      <td>~3 uA</td>
      <td>~3 uA</td>
    </tr>
  </table>

  <h2>Accuracy & Constraints</h2>
  <ul>
    <li><strong>Lunar Drift:</strong> &lt;1 day per 122 years (135-tooth gearing)</li>
    <li><strong>Tide Model:</strong> 5-constituent harmonic analysis (M2, S2, N2, K1, O1)</li>
    <li><strong>Tide Accuracy:</strong> ±10–20% depending on location</li>
    <li><strong>Connectivity:</strong> None (air-gapped by design)</li>
  </ul>

  <h2>Repository Structure</h2>
  <ul>
    <li><strong>/hardware</strong> → STEP files, PCB, BOM</li>
    <li><strong>/firmware</strong> → Tide engine, display drivers</li>
    <li><strong>/validation</strong> → NOAA comparison scripts and power models</li>
    <li><strong>/docs</strong> → Architecture, calibration, physics, philosophy</li>
  </ul>
</div>
