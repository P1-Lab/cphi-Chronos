<div style="font-family: sans-serif; max-width: 800px; line-height: 1.6; color: #333;">
  <h2 style="border-bottom: 1px solid #eee; padding-bottom: 10px;">Hardware Specification & Constraints</h2>
  
  <p style="background: #fff9db; padding: 15px; border-left: 5px solid #fab005; font-weight: bold;">
    STATUS: Specification Defined. Currently seeking contributors for CAD (STEP) and PCB Layout.
  </p>

  <h3 style="color: #666; font-size: 1.1rem; text-transform: uppercase; margin-top: 25px;">1. Mechanical Constraints</h3>
  <ul style="list-style-type: none; padding-left: 0;">
    <li style="margin-bottom: 10px;"><strong>Chassis:</strong> 42mm Grade 2 Titanium; target thickness 12mm.</li>
    <li style="margin-bottom: 10px;"><strong>Movement:</strong> Seiko NH35 Automatic; requires custom spacer.</li>
    <li style="margin-bottom: 10px;"><strong>Gear Train:</strong> 135-tooth lunar complication; module 0.2–0.3.</li>
    <li style="margin-bottom: 10px;"><strong>Seals:</strong> Threaded crown with Viton O-rings for 50m WR target.</li>
  </ul>

  <h3 style="color: #666; font-size: 1.1rem; text-transform: uppercase; margin-top: 25px;">2. Electronic Constraints</h3>
  <ul style="list-style-type: none; padding-left: 0;">
    <li style="margin-bottom: 10px;"><strong>Footprint:</strong> Circular PCB, max diameter 30mm.</li>
    <li style="margin-bottom: 10px;"><strong>Core components:</strong> ESP32-C3, DS3231 RTC, CR2032 Battery.</li>
    <li style="margin-bottom: 10px;"><strong>Display:</strong> 1.02" SPI E-Ink (GDEW0102I6F).</li>
    <li style="margin-bottom: 10px;"><strong>Programming:</strong> Internal USB-C header for air-gapped calibration.</li>
  </ul>

  <div style="margin-top: 30px; padding: 20px; background: #f8f9fa; border: 1px solid #dee2e6; border-radius: 4px;">
    <h4 style="margin-top: 0;">Contribution Priorities:</h4>
    <ol>
      <li><strong>Mechanical:</strong> Optimization of 135t gear geometry for CNC production.</li>
      <li><strong>PCB:</strong> Layout optimization to minimize Z-height and power traces.</li>
    </ol>
    <p style="font-size: 0.9rem; margin-bottom: 0;"><em>To contribute, please open an Issue or submit a Pull Request to the <strong>/hardware</strong> directory.</em></p>
  </div>
</div>
